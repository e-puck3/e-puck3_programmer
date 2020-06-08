

/** @endcond */
#ifndef MP_FLASH_H
#define MP_FLASH_H
/**@{*/

void mp_flash_unlock(void);
void mp_flash_lock(void);
void flash_program_word(uint32_t address, uint32_t data);
void mp_flash_program_byte(uint32_t address, uint8_t data);
void mp_flash_erase_sector(uint8_t sector);

/**@}*/

#endif /* MP_FLASH_H */

