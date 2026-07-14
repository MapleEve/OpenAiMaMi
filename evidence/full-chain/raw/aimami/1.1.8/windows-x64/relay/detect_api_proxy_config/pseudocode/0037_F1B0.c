// win 1.1.8 detect_api_proxy_config node va=0x14107f1b0 depth=2
// F1B0
__int64 __fastcall sub_14107F1B0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rdx
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+28h] [rbp-18h] BYREF
  _QWORD *v10; // [rsp+30h] [rbp-10h]
  int v11; // [rsp+38h] [rbp-8h] BYREF
  char v12; // [rsp+3Ch] [rbp-4h]
  __int64 v13; // [rsp+40h] [rbp+0h]

  v13 = -2; /*0x14107f1bd*/
  v3 = *((_QWORD **)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex); /*0x14107f1d7*/
  if ( v3[75] )
  {
    v11 = 0; /*0x14107f24b*/
    v12 = 0; /*0x14107f252*/
    v9 = sub_1410870B0(
           &v11,
           "fatal runtime error: the System allocator may not use TLS with destructors, aborting\n",
           171);
    sub_141060200(&v9); /*0x14107f274*/
    __fastfail(7u); /*0x14107f27e*/
  }
  v3[75] = -1; /*0x14107f1ef*/
  v5 = v3[78]; /*0x14107f204*/
  v10 = v3 + 75; /*0x14107f208*/
  if ( v5 == v3[76] ) /*0x14107f210*/
    sub_1412AC560(v10 + 1); /*0x14107f21a*/
  v6 = v10; /*0x14107f220*/
  result = v10[2]; /*0x14107f224*/
  v8 = 16 * v5; /*0x14107f22b*/
  *(_QWORD *)(result + v8) = a1; /*0x14107f22f*/
  *(_QWORD *)(result + v8 + 8) = a2; /*0x14107f233*/
  v6[3] = v5 + 1; /*0x14107f23b*/
  ++*v6; /*0x14107f23f*/
  return result; /*0x14107f242*/
}