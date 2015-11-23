
#include "crypto_box_curve25519xsalsa20poly1305.h"

#define crypto_box crypto_box_curve25519xsalsa20poly1305
#define crypto_box_open crypto_box_curve25519xsalsa20poly1305_open
#define crypto_box_seed_keypair crypto_box_curve25519xsalsa20poly1305_seed_keypair
#define crypto_box_keypair crypto_box_curve25519xsalsa20poly1305_keypair
#define crypto_box_beforenm crypto_box_curve25519xsalsa20poly1305_beforenm
#define crypto_box_afternm crypto_box_curve25519xsalsa20poly1305_afternm
#define crypto_box_open_afternm crypto_box_curve25519xsalsa20poly1305_open_afternm
#define crypto_box_SEEDBYTES crypto_box_curve25519xsalsa20poly1305_SEEDBYTES
#define crypto_box_PUBLICKEYBYTES crypto_box_curve25519xsalsa20poly1305_PUBLICKEYBYTES
#define crypto_box_SECRETKEYBYTES crypto_box_curve25519xsalsa20poly1305_SECRETKEYBYTES
#define crypto_box_BEFORENMBYTES crypto_box_curve25519xsalsa20poly1305_BEFORENMBYTES
#define crypto_box_NONCEBYTES crypto_box_curve25519xsalsa20poly1305_NONCEBYTES
#define crypto_box_ZEROBYTES crypto_box_curve25519xsalsa20poly1305_ZEROBYTES
#define crypto_box_BOXZEROBYTES crypto_box_curve25519xsalsa20poly1305_BOXZEROBYTES
#define crypto_box_MACBYTES (crypto_box_ZEROBYTES - crypto_box_BOXZEROBYTES)
#define crypto_box_IMPLEMENTATION crypto_box_curve25519xsalsa20poly1305_IMPLEMENTATION
#define crypto_box_VERSION crypto_box_curve25519xsalsa20poly1305_VERSION
