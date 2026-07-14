// mac 1.1.8 BACKEND-ONLY refresh_tray_menu node 0x10036bb40 depth=2
// _::clone
void *__fastcall _$LT$tauri..tray..TrayIcon$LT$R$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h1c370719cb2485d8(
        void *__dst,
        _QWORD *a2)
{
  _QWORD *v2; // rax
  char v4; // of
  volatile signed __int64 *v5; // r15
  __int64 v6; // rt0
  volatile signed __int64 *v7; // r14
  __int64 v8; // rt0
  size_t v9; // rax
  size_t v10; // rax
  size_t __src[17]; // [rsp+8h] [rbp-D8h] BYREF
  size_t v13[3]; // [rsp+90h] [rbp-50h] BYREF
  size_t v14; // [rsp+A8h] [rbp-38h]
  size_t v15; // [rsp+B0h] [rbp-30h]
  size_t v16; // [rsp+B8h] [rbp-28h]
  _QWORD *v17; // [rsp+C0h] [rbp-20h]

  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v13, (__int64)(a2 + 19)); /*0x10036bb61*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, (__int64)(a2 + 22)); /*0x10036bb74*/
  v2 = (_QWORD *)a2[25]; /*0x10036bb79*/
  if ( (*v2)++ == -1 ) /*0x10036bb80*/
    goto LABEL_5; /*0x10036bb83*/
  v16 = __src[2]; /*0x10036bb90*/
  v15 = __src[1]; /*0x10036bba2*/
  v14 = __src[0]; /*0x10036bba6*/
  v17 = v2; /*0x10036bbaa*/
  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h87ba61d57448fd51( /*0x10036bbb8*/
    (__int64)__src,
    (__int64)a2);
  v5 = (volatile signed __int64 *)a2[17]; /*0x10036bbbd*/
  v6 = _InterlockedIncrement64(v5); /*0x10036bbc4*/
  if ( (v6 < 0) ^ v4 | (v6 == 0) /*0x10036bbd9*/
    || (v7 = (volatile signed __int64 *)a2[18], v8 = _InterlockedIncrement64(v7), (v8 < 0) ^ v4 | (v8 == 0)) )
  {
LABEL_5:
    BUG(); /*0x10036bc5f*/
  }
  memcpy(__dst, __src, 0x88u); /*0x10036bbee*/
  *((_QWORD *)__dst + 21) = v13[2]; /*0x10036bbf7*/
  v9 = v13[0]; /*0x10036bbfe*/
  *((_QWORD *)__dst + 20) = v13[1]; /*0x10036bc06*/
  *((_QWORD *)__dst + 19) = v9; /*0x10036bc0d*/
  v10 = v14; /*0x10036bc14*/
  *((_QWORD *)__dst + 23) = v15; /*0x10036bc1c*/
  *((_QWORD *)__dst + 24) = v16; /*0x10036bc27*/
  *((_QWORD *)__dst + 25) = v17; /*0x10036bc32*/
  *((_QWORD *)__dst + 22) = v10; /*0x10036bc39*/
  *((_QWORD *)__dst + 17) = v5; /*0x10036bc40*/
  *((_QWORD *)__dst + 18) = v7; /*0x10036bc47*/
  return __dst; /*0x10036bc51*/
}