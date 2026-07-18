// mac 1.2.2 NEW codexmate_lib4core12debug_bundle19threads_table_sh 0x101144c10 d=1
__int64 foldhash::seed::gen_per_hasher_seed::h01eea3e643df83bd()
{
  unsigned __int64 v1; // [rsp+0h] [rbp-8h] BYREF

  v1 = (unsigned __int64)&v1; /*0x101144c18*/
  foldhash::seed::gen_per_hasher_seed::PER_HASHER_NONDETERMINISM::hef737ecad1cb9266 = ((v1 /*0x101144c36*/
                                                                                      * (unsigned __int128)(foldhash::seed::gen_per_hasher_seed::PER_HASHER_NONDETERMINISM::hef737ecad1cb9266 ^ 0x13198A2E03707344uLL)) >> 64)
                                                                                    ^ (v1
                                                                                     * (foldhash::seed::gen_per_hasher_seed::PER_HASHER_NONDETERMINISM::hef737ecad1cb9266
                                                                                      ^ 0x13198A2E03707344LL));
  return ((0xA4093822299F31D0LL /*0x101144c4d*/
         * (unsigned __int128)(unsigned __int64)foldhash::seed::gen_per_hasher_seed::PER_HASHER_NONDETERMINISM::hef737ecad1cb9266) >> 64)
       ^ (0xA4093822299F31D0LL * foldhash::seed::gen_per_hasher_seed::PER_HASHER_NONDETERMINISM::hef737ecad1cb9266);
}