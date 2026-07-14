// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_direct_client node 0x100b310d0 depth=2
char *__fastcall reqwest::async_impl::client::ClientBuilder::new::h2862450b5d9e256a(char *__dst)
{
  __int64 v1; // rax
  __int64 v2; // r12
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rdx
  _BYTE v12[96]; // [rsp+0h] [rbp-270h] BYREF
  _QWORD v13[12]; // [rsp+60h] [rbp-210h] BYREF
  _QWORD __src[22]; // [rsp+C0h] [rbp-1B0h] BYREF
  __int64 v15; // [rsp+170h] [rbp-100h]
  __int64 v16; // [rsp+178h] [rbp-F8h]
  __int64 v17; // [rsp+180h] [rbp-F0h]
  __int64 v18; // [rsp+188h] [rbp-E8h]
  __int64 v19; // [rsp+190h] [rbp-E0h]
  __int64 v20; // [rsp+198h] [rbp-D8h]
  __int64 v21; // [rsp+1A0h] [rbp-D0h]
  __int64 v22; // [rsp+1A8h] [rbp-C8h]
  __int64 v23; // [rsp+1B0h] [rbp-C0h]
  __int64 v24; // [rsp+1B8h] [rbp-B8h]
  __int64 v25; // [rsp+1C0h] [rbp-B0h]
  __int64 v26; // [rsp+1C8h] [rbp-A8h]
  _OWORD v27[3]; // [rsp+1D0h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+200h] [rbp-70h] BYREF
  __int64 v29; // [rsp+208h] [rbp-68h]
  __int64 v30; // [rsp+210h] [rbp-60h]
  __int64 v31; // [rsp+218h] [rbp-58h]
  __int64 v32; // [rsp+220h] [rbp-50h]
  __int64 v33; // [rsp+228h] [rbp-48h]
  __int64 v34; // [rsp+230h] [rbp-40h] BYREF
  __int64 v35; // [rsp+238h] [rbp-38h]
  __int64 v36; // [rsp+240h] [rbp-30h]
  __int64 v37; // [rsp+248h] [rbp-28h]

  http::header::map::HeaderMap$LT$T$GT$::try_with_capacity::h5c96bb7d54fc6522(__src, 2); /*0x100b310f1*/
  if ( LODWORD(__src[0]) == 3 ) /*0x100b310fd*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100b315c0*/
      (__int64)"size overflows MAX_SIZENoVerifierIgnoreHostnamerootssignature_algorithmsEnforceIgnoreAllow",
      23,
      (__int64)&v28,
      (__int64)&anon_5ee3c11fca7d45d02c4948defd9600db_26,
      (__int64)&off_10154EBD8);
  qmemcpy(v12, __src, sizeof(v12)); /*0x100b31119*/
  memset(v27, 0, 32); /*0x100b31126*/
  v13[0] = &off_10154EAC0; /*0x100b31134*/
  v13[1] = "*/*"; /*0x100b31142*/
  v13[2] = 3; /*0x100b31149*/
  v13[3] = 0; /*0x100b31154*/
  LOBYTE(v13[4]) = 0; /*0x100b3115f*/
  http::header::map::HeaderMap$LT$T$GT$::try_insert2::h36c0c1eea92327d9(__src, v12, v27, v13); /*0x100b3117e*/
  if ( LOBYTE(__src[4]) == 3 ) /*0x100b3118a*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100b315e3*/
      (__int64)"size overflows MAX_SIZENoVerifierIgnoreHostnamerootssignature_algorithmsEnforceIgnoreAllow",
      23,
      (__int64)&v28,
      (__int64)&anon_5ee3c11fca7d45d02c4948defd9600db_26,
      (__int64)&anon_5ee3c11fca7d45d02c4948defd9600db_62);
  v35 = __src[4]; /*0x100b31197*/
  v34 = __src[3]; /*0x100b311a2*/
  v33 = __src[2]; /*0x100b311ad*/
  v32 = __src[1]; /*0x100b311bf*/
  v31 = __src[0]; /*0x100b311c3*/
  if ( LOBYTE(__src[4]) != 2 ) /*0x100b311c9*/
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v31 + 32))(&v34, v32, v33); /*0x100b311db*/
  qmemcpy(v13, v12, sizeof(v13)); /*0x100b311f1*/
  v24 = 0; /*0x100b311f4*/
  v25 = 8; /*0x100b311ff*/
  v26 = 0; /*0x100b3120a*/
  v15 = 1; /*0x100b31215*/
  v16 = 10; /*0x100b31220*/
  LODWORD(v34) = 0; /*0x100b3122b*/
  v31 = 1; /*0x100b31232*/
  LODWORD(v37) = 2; /*0x100b3123a*/
  v35 = 0; /*0x100b31241*/
  v21 = 0; /*0x100b31249*/
  v22 = 8; /*0x100b31254*/
  v23 = 0; /*0x100b3125f*/
  v18 = 0; /*0x100b3126a*/
  v19 = 8; /*0x100b31275*/
  v20 = 0; /*0x100b31280*/
  v28 = 0; /*0x100b3128b*/
  v29 = 8; /*0x100b31293*/
  v30 = 0; /*0x100b3129b*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100b312aa*/
  v2 = v1; /*0x100b312ac*/
  if ( *(_BYTE *)(v1 + 16) == 1 ) /*0x100b312b3*/
  {
    v3 = *(_QWORD *)v1; /*0x100b312b9*/
    v4 = *(_QWORD *)(v1 + 8); /*0x100b312bd*/
  }
  else
  {
    v3 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x100b315ef*/
    v4 = v11; /*0x100b315f2*/
    *(_QWORD *)v2 = v3; /*0x100b315f5*/
    *(_QWORD *)(v2 + 8) = v11; /*0x100b315f9*/
    *(_BYTE *)(v2 + 16) = 1; /*0x100b315fe*/
  }
  *(_QWORD *)v2 = v3 + 1; /*0x100b312c6*/
  qmemcpy(__src, v13, 0x60u); /*0x100b312e0*/
  *((_QWORD *)__dst + 74) = v26; /*0x100b312ea*/
  v5 = v24; /*0x100b312f1*/
  *((_QWORD *)__dst + 73) = v25; /*0x100b312ff*/
  *((_QWORD *)__dst + 72) = v5; /*0x100b31306*/
  __src[12] = v15; /*0x100b3131b*/
  __src[13] = v16; /*0x100b31322*/
  __src[14] = v17; /*0x100b31330*/
  __src[15] = v31; /*0x100b3133f*/
  __src[16] = v32; /*0x100b31346*/
  __src[17] = v33; /*0x100b31351*/
  __src[18] = v34; /*0x100b3135c*/
  __src[19] = v35; /*0x100b31367*/
  __src[20] = v36; /*0x100b31372*/
  __src[21] = v37; /*0x100b3137d*/
  *((_QWORD *)__dst + 77) = v23; /*0x100b3138b*/
  v6 = v21; /*0x100b31392*/
  *((_QWORD *)__dst + 76) = v22; /*0x100b313a0*/
  *((_QWORD *)__dst + 75) = v6; /*0x100b313a7*/
  v7 = v19; /*0x100b313b5*/
  *((_QWORD *)__dst + 78) = v18; /*0x100b313bc*/
  *((_QWORD *)__dst + 79) = v7; /*0x100b313c3*/
  *((_QWORD *)__dst + 80) = v20; /*0x100b313d1*/
  v8 = v29; /*0x100b313dc*/
  *((_QWORD *)__dst + 81) = v28; /*0x100b313e0*/
  *((_QWORD *)__dst + 82) = v8; /*0x100b313e7*/
  *((_QWORD *)__dst + 83) = v30; /*0x100b313f2*/
  *(_QWORD *)((char *)v27 + 4) = &xmmword_10125CF30; /*0x100b31400*/
  memset((char *)v27 + 12, 0, 24); /*0x100b3140e*/
  memcpy(__dst, __src, 0xB0u); /*0x100b3143c*/
  *((_QWORD *)__dst + 22) = 3; /*0x100b31441*/
  *((_QWORD *)__dst + 29) = 2; /*0x100b3144c*/
  *((_QWORD *)__dst + 84) = 0x8000000000000000LL; /*0x100b31461*/
  *((_QWORD *)__dst + 87) = 0x300000001LL; /*0x100b31472*/
  *((_DWORD *)__dst + 178) = 1000000000; /*0x100b31479*/
  *((_QWORD *)__dst + 90) = 90; /*0x100b31483*/
  *((_DWORD *)__dst + 182) = 0; /*0x100b3148e*/
  *((_QWORD *)__dst + 92) = 15; /*0x100b31498*/
  *((_DWORD *)__dst + 186) = 0; /*0x100b314a3*/
  *((_QWORD *)__dst + 94) = 15; /*0x100b314ad*/
  *((_DWORD *)__dst + 190) = 0; /*0x100b314b8*/
  *((_DWORD *)__dst + 194) = 1000000000; /*0x100b314c2*/
  *((_DWORD *)__dst + 198) = 1000000000; /*0x100b314cc*/
  v9 = *((_QWORD *)&v27[0] + 1); /*0x100b314dd*/
  *(_QWORD *)(__dst + 796) = *(_QWORD *)&v27[0]; /*0x100b314e4*/
  *(_QWORD *)(__dst + 804) = v9; /*0x100b314eb*/
  *(_OWORD *)(__dst + 812) = v27[1]; /*0x100b314f9*/
  *((_DWORD *)__dst + 207) = v27[2]; /*0x100b31511*/
  *((_QWORD *)__dst + 104) = v3; /*0x100b31517*/
  *((_QWORD *)__dst + 105) = v4; /*0x100b3151e*/
  *((_QWORD *)__dst + 106) = -1; /*0x100b31525*/
  *((_QWORD *)__dst + 110) = 0; /*0x100b31530*/
  *((_QWORD *)__dst + 108) = 0; /*0x100b3153b*/
  *((_QWORD *)__dst + 107) = 0; /*0x100b31546*/
  *((_QWORD *)__dst + 112) = 0x101010100010101LL; /*0x100b3155b*/
  *((_WORD *)__dst + 452) = 256; /*0x100b31562*/
  *(_DWORD *)(__dst + 906) = 0; /*0x100b3156b*/
  __dst[910] = 0; /*0x100b31575*/
  *(_DWORD *)(__dst + 911) = 33554433; /*0x100b3157c*/
  *(_WORD *)(__dst + 931) = 1028; /*0x100b31586*/
  return __dst; /*0x100b31592*/
}