#ifndef CONSTANTS_H
#define CONSTANTS_H 1

#ifndef DEBUG_MODE
#   define DEBUG_MODE 0
#endif

constexpr uint8_t   BUTTON_COUNT              = 8
constexpr uint32_t  DUTY                      = 65535

constexpr double    PWN_CLOCK_FREQ            = 125000000.0

/* Volume calculation */
constexpr double    CALC_DUTY_POW             = 2.2

// Smoothing factor for volume (0.0 - 1.0)
constexpr float     ALPHA                     = 0.002f  // <-- tuning

constexpr uint16_t  ADC_PREAMP                = 100		// <-- tuning
constexpr uint16_t  DIFF_THRESHOLD            = 100		// <-- tuning

constexpr uint16_t  DIFF_BUFFER_SIZE	      = 100	    // <-- tuning
constexpr uint16_t  DIFF_COUNT_LOW_THRESHOLD  = 20      // <-- tuning
constexpr uint16_t  DIFF_COUNT_HIGH_THRESHOLD = 80      // <-- tuning

constexpr uint16_t  MAX_VOLUME                = DIFF_COUNT_HIGH_THRESHOLD - DIFF_COUNT_LOW_THRESHOLD

#endif 

