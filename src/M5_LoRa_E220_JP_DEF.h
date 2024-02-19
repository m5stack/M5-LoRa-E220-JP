#ifndef __M5_LORA_E220_JP_CONFIG_DEF_H__
#define __M5_LORA_E220_JP_CONFIG_DEF_H__

#include <Arduino.h>

typedef enum {
    BAUD_1200   = 0b000,
    BAUD_2400   = 0b001,
    BAUD_4800   = 0b010,
    BAUD_9600   = 0b011,
    BAUD_19200  = 0b100,
    BAUD_38400  = 0b101,
    BAUD_57600  = 0b110,
    BAUD_115200 = 0b111
} baud_rate_val_t;

typedef enum {
    // BW125
    BW125K_SF5 = 0b00000,  // 15,625bps
    BW125K_SF6 = 0b00100,  // 9,375bps
    BW125K_SF7 = 0b01000,  // 5,469bps
    BW125K_SF8 = 0b01100,  // 3,125bps
    BW125K_SF9 = 0b10000,  // 1,758bps
    // BW250
    BW250K_SF5  = 0b00001,  // 31,250bps
    BW250K_SF6  = 0b00101,  // 18,750bps
    BW250K_SF7  = 0b01001,  // 10,938bps
    BW250K_SF8  = 0b01101,  // 6,250bps
    BW250K_SF9  = 0b10001,  // 3,516bps
    BW250K_SF10 = 0b10101,  // 1,953bps
    // BW500
    BW500K_SF5  = 0b00010,  // 62,500bps
    BW500K_SF6  = 0b00110,  // 37,500bps
    BW500K_SF7  = 0b01010,  // 21,875bps
    BW500K_SF8  = 0b01110,  // 12,500bps
    BW500K_SF9  = 0b10010,  // 7,031bps
    BW500K_SF10 = 0b10110,  // 3,906bps
    BW500K_SF11 = 0b11010   // 2,148bps
} datarate_val_t;

typedef enum {
    SUBPACKET_200_BYTE = 0b00,
    SUBPACKET_128_BYTE = 0b01,
    SUBPACKET_64_BYTE  = 0b10,
    SUBPACKET_32_BYTE  = 0b11
} subpacket_size_val_t;

typedef enum {
    RSSI_AMBIENT_NOISE_ENABLE  = 0b1,
    RSSI_AMBIENT_NOISE_DISABLE = 0b0
} rssi_ambient_noise_flag_t;

typedef enum {
    TX_POWER_13dBm = 0b00,
    TX_POWER_12dBm = 0b01,
    TX_POWER_7dBm  = 0b10,
    TX_POWER_0dBm  = 0b11
} transmitting_power_val_t;

typedef enum {
    RSSI_BYTE_ENABLE  = 0b1,
    RSSI_BYTE_DISABLE = 0b0
} rssi_byte_flag_t;

typedef enum {
    UART_TT_MODE  = 0b0,
    UART_P2P_MODE = 0b1
} transmission_method_type_t;

typedef enum { LBT_ENABLE = 0b1, LBT_DISABLE = 0b0 } blt_flag_t;

typedef enum {
    WOR_500MS  = 0b000,
    WOR_1000MS = 0b001,
    WOR_1500MS = 0b010,
    WOR_2000MS = 0b011
} wor_cycle_val_t;

#endif
