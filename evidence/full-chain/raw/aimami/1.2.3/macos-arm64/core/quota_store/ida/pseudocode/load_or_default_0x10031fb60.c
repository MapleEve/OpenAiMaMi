// __ZN13codexmate_lib4core11quota_store15load_or_default @ 0x10031fb60
_QWORD *__fastcall codexmate_lib::core::quota_store::load_or_default::h211ac6fdb1941574(_QWORD *a1)
{
  __int64 v1; // rax
  int v3; // [rsp+8h] [rbp-68h] BYREF
  __int64 v4; // [rsp+10h] [rbp-60h]
  __int64 v5; // [rsp+18h] [rbp-58h]
  __int64 v6; // [rsp+20h] [rbp-50h]
  __int64 v7; // [rsp+28h] [rbp-48h]
  __int64 v8; // [rsp+30h] [rbp-40h]

  codexmate_lib::core::quota_store::load::h655f425e55903b24(&v3); /*0x10031fb70*/
  if ( v3 == 11 ) /*0x10031fb79*/
  {
    a1[4] = v8; /*0x10031fb7f*/
    a1[3] = v7; /*0x10031fb87*/
    a1[2] = v6; /*0x10031fb8f*/
    v1 = v4; /*0x10031fb93*/
    a1[1] = v5; /*0x10031fb9b*/
    *a1 = v1; /*0x10031fb9f*/
  }
  else
  {
    *((_DWORD *)a1 + 8) = 3; /*0x10031fba4*/
    a1[3] = 0; /*0x10031fbab*/
    *a1 = 0; /*0x10031fbb3*/
    a1[1] = 8; /*0x10031fbba*/
    a1[2] = 0; /*0x10031fbc2*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v3); /*0x10031fbce*/
  }
  return a1; /*0x10031fbd6*/
}