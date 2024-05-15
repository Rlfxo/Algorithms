typedef void (*adc_cb_t)(uint32_t);
//========== type 선언

static adc_cb_t           adc_cb[AdcPort_MAX];
static uint32_t 	      cp_voltage;

void adc_register_callback(adc_port_e port, adc_cb_t cb)
{
  adc_cb[port] = cb;
}

void HAL_ADC_ConvHalfCpltCallback(ADC_HandleTypeDef* hadc) // Weak func
{
  if (hadc->Instance == ADC5) {
    adc_cb[AdcPort_CP](cp_voltage); // *adc_cb_t(uint32_t)
  }
}
//========== call back 셋팅

static os_timer_t cp_timer;

static void timer_read_cp(void* args)
{타이머 동작}

static void cp_cb(uint32_t volt)
{콜백시 동작} 

void cp_init(void)
{
  adc_register_callback(AdcPort_CP, cp_cb); // 콜백 등록

  timer_attr_t attr = {
    .name = "timer_cp",
    .type = timer_periodic,
    .timer_cb = timer_read_cp,
  }; // 타이머 등록

  cp_timer = os_timer_create(&attr)
  os_timer_start(cp_timer, 1000);
}
//========== call back 사용