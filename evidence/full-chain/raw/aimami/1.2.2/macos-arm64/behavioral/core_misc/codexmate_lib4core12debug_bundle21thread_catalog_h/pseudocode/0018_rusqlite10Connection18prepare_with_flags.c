// mac 1.2.2 NEW codexmate_lib4core12debug_bundle21thread_catalog_h 0x1004883c0 d=1
__int64 __fastcall rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v6; // rdx
  __int64 result; // rax
  unsigned __int64 v8; // rax
  _QWORD v9[8]; // [rsp+8h] [rbp-128h] BYREF
  __int64 v10; // [rsp+48h] [rbp-E8h] BYREF
  unsigned __int64 v11; // [rsp+50h] [rbp-E0h]
  __int64 v12; // [rsp+58h] [rbp-D8h]
  __int64 v13; // [rsp+60h] [rbp-D0h]
  __int64 v14; // [rsp+68h] [rbp-C8h]
  __int64 v15; // [rsp+70h] [rbp-C0h]
  __int64 v16; // [rsp+78h] [rbp-B8h]
  __int64 v17; // [rsp+80h] [rbp-B0h]
  unsigned __int64 v18; // [rsp+88h] [rbp-A8h]
  __int64 v19; // [rsp+90h] [rbp-A0h] BYREF
  unsigned __int64 v20; // [rsp+98h] [rbp-98h]
  __int64 v21; // [rsp+A0h] [rbp-90h]
  __int64 v22; // [rsp+A8h] [rbp-88h]
  __int64 v23; // [rsp+B0h] [rbp-80h]
  __int64 v24; // [rsp+B8h] [rbp-78h]
  __int64 v25; // [rsp+C0h] [rbp-70h]
  __int64 v26; // [rsp+C8h] [rbp-68h]
  unsigned __int64 v27; // [rsp+D0h] [rbp-60h]
  __int64 v28; // [rsp+D8h] [rbp-58h]
  __int64 v29; // [rsp+E0h] [rbp-50h]
  __int64 v30; // [rsp+E8h] [rbp-48h]
  __int64 v31; // [rsp+F0h] [rbp-40h]
  __int64 v32; // [rsp+F8h] [rbp-38h]
  __int64 v33; // [rsp+100h] [rbp-30h]
  unsigned __int64 v34; // [rsp+108h] [rbp-28h]

  if ( *a2 ) /*0x1004883d2*/
    core::cell::panic_already_borrowed::hd7c6a6bf28ec0022(&off_10188E260); /*0x1004886ea*/
  *a2 = -1; /*0x1004883e8*/
  rusqlite::inner_connection::InnerConnection::prepare::h1c13b475417ddead(&v10, a2 + 1, a2, a3, a4, 0); /*0x100488406*/
  v27 = v11; /*0x100488419*/
  v28 = v12; /*0x100488424*/
  v29 = v13; /*0x10048842f*/
  v30 = v14; /*0x10048843a*/
  v31 = v15; /*0x100488445*/
  v32 = v16; /*0x100488450*/
  v33 = v17; /*0x10048845b*/
  v6 = v18; /*0x10048845f*/
  if ( !v10 ) /*0x100488469*/
  {
    a1[7] = v33; /*0x1004884e9*/
    a1[6] = v32; /*0x1004884f1*/
    a1[5] = v31; /*0x1004884f9*/
    a1[4] = v30; /*0x100488501*/
    a1[3] = v29; /*0x100488509*/
    result = v27; /*0x10048850d*/
    a1[2] = v28; /*0x100488515*/
    a1[1] = result; /*0x100488519*/
    a1[8] = v6; /*0x10048851d*/
    *a1 = 1; /*0x100488521*/
    ++*a2; /*0x100488528*/
    return result; /*0x10048852b*/
  }
  v26 = v33; /*0x10048846f*/
  v25 = v32; /*0x100488477*/
  v24 = v31; /*0x10048847f*/
  v23 = v30; /*0x100488487*/
  v22 = v29; /*0x10048848f*/
  v21 = v28; /*0x10048849e*/
  v20 = v27; /*0x1004884a5*/
  v19 = v10; /*0x1004884ac*/
  ++*a2; /*0x1004884b3*/
  if ( v6 ) /*0x1004884b9*/
  {
    if ( a4 <= v6 ) /*0x1004884c5*/
    {
      if ( a4 != v6 ) /*0x100488530*/
LABEL_6:
        core::str::slice_error_fail::h480e51fbd8b15eba(a3, a4, v6, a4, &off_10188E248); /*0x1004884ce*/
    }
    else if ( *(char *)(a3 + v6) < -64 ) /*0x1004884cc*/
    {
      goto LABEL_6; /*0x1004884cc*/
    }
    rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(&v10, a2, v6 + a3, a4 - v6); /*0x100488542*/
    v27 = v11; /*0x100488554*/
    v28 = v12; /*0x10048855f*/
    v29 = v13; /*0x10048856a*/
    v30 = v14; /*0x100488575*/
    v31 = v15; /*0x100488580*/
    v32 = v16; /*0x10048858b*/
    v33 = v17; /*0x100488596*/
    v34 = v18; /*0x1004885a1*/
    if ( (_DWORD)v10 == 1 ) /*0x1004885a8*/
    {
      a1[8] = v34; /*0x1004885ae*/
      a1[7] = v33; /*0x1004885b6*/
      a1[6] = v32; /*0x1004885be*/
      a1[5] = v31; /*0x1004885c6*/
      a1[4] = v30; /*0x1004885ce*/
      a1[3] = v29; /*0x1004885d6*/
      v8 = v27; /*0x1004885da*/
      a1[2] = v28; /*0x1004885e2*/
LABEL_13:
      a1[1] = v8; /*0x10048865b*/
      *a1 = 1; /*0x10048865f*/
      return core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h43ec02918eaa5d70(&v19); /*0x100488672*/
    }
    v9[7] = v34; /*0x1004885ec*/
    v9[6] = v33; /*0x1004885f7*/
    v9[5] = v32; /*0x100488602*/
    v9[4] = v31; /*0x10048860d*/
    v9[3] = v30; /*0x100488618*/
    v9[2] = v29; /*0x100488623*/
    v9[1] = v28; /*0x100488632*/
    v9[0] = v27; /*0x100488639*/
    if ( v34 ) /*0x100488643*/
    {
      core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h43ec02918eaa5d70(v9); /*0x10048864c*/
      v8 = 0x8000000000000012LL; /*0x100488651*/
      goto LABEL_13; /*0x100488651*/
    }
    core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h43ec02918eaa5d70(v9); /*0x10048867b*/
  }
  a1[8] = v26; /*0x100488684*/
  a1[7] = v25; /*0x10048868c*/
  a1[6] = v24; /*0x100488694*/
  a1[5] = v23; /*0x10048869c*/
  a1[4] = v22; /*0x1004886a7*/
  a1[3] = v21; /*0x1004886b2*/
  result = v19; /*0x1004886b6*/
  a1[2] = v20; /*0x1004886c4*/
  a1[1] = result; /*0x1004886c8*/
  *a1 = 0; /*0x1004886cc*/
  return result; /*0x1004886d3*/
}