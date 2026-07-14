// mac 1.1.8 BEHAVIORAL-BACKEND check_legacy_migrated_threads node 0x1004291f0 depth=1
// rusqlite10Connection18prepare_with_flags17h018440c5579b9eb9E_0
__int64 __fastcall rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 a4,
        double a5)
{
  unsigned __int64 v7; // rdx
  __int64 result; // rax
  unsigned __int64 v9; // rax
  _QWORD v10[8]; // [rsp+8h] [rbp-128h] BYREF
  __int64 v11; // [rsp+48h] [rbp-E8h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp-E0h]
  __int64 v13; // [rsp+58h] [rbp-D8h]
  __int64 v14; // [rsp+60h] [rbp-D0h]
  __int64 v15; // [rsp+68h] [rbp-C8h]
  __int64 v16; // [rsp+70h] [rbp-C0h]
  __int64 v17; // [rsp+78h] [rbp-B8h]
  __int64 v18; // [rsp+80h] [rbp-B0h]
  unsigned __int64 v19; // [rsp+88h] [rbp-A8h]
  __int64 v20; // [rsp+90h] [rbp-A0h] BYREF
  unsigned __int64 v21; // [rsp+98h] [rbp-98h]
  __int64 v22; // [rsp+A0h] [rbp-90h]
  __int64 v23; // [rsp+A8h] [rbp-88h]
  __int64 v24; // [rsp+B0h] [rbp-80h]
  __int64 v25; // [rsp+B8h] [rbp-78h]
  __int64 v26; // [rsp+C0h] [rbp-70h]
  __int64 v27; // [rsp+C8h] [rbp-68h]
  unsigned __int64 v28; // [rsp+D0h] [rbp-60h]
  __int64 v29; // [rsp+D8h] [rbp-58h]
  __int64 v30; // [rsp+E0h] [rbp-50h]
  __int64 v31; // [rsp+E8h] [rbp-48h]
  __int64 v32; // [rsp+F0h] [rbp-40h]
  __int64 v33; // [rsp+F8h] [rbp-38h]
  __int64 v34; // [rsp+100h] [rbp-30h]
  unsigned __int64 v35; // [rsp+108h] [rbp-28h]

  if ( *a2 ) /*0x100429202*/
    core::cell::panic_already_borrowed::hd7c6a6bf28ec0022(&off_10152FAC8); /*0x10042951a*/
  *a2 = -1; /*0x100429218*/
  rusqlite::inner_connection::InnerConnection::prepare::h1c13b475417ddead(&v11, a2 + 1, a2, a3, a4, 0); /*0x100429236*/
  v28 = v12; /*0x100429249*/
  v29 = v13; /*0x100429254*/
  v30 = v14; /*0x10042925f*/
  v31 = v15; /*0x10042926a*/
  v32 = v16; /*0x100429275*/
  v33 = v17; /*0x100429280*/
  v34 = v18; /*0x10042928b*/
  v7 = v19; /*0x10042928f*/
  if ( !v11 ) /*0x100429299*/
  {
    a1[7] = v34; /*0x100429319*/
    a1[6] = v33; /*0x100429321*/
    a1[5] = v32; /*0x100429329*/
    a1[4] = v31; /*0x100429331*/
    a1[3] = v30; /*0x100429339*/
    result = v28; /*0x10042933d*/
    a1[2] = v29; /*0x100429345*/
    a1[1] = result; /*0x100429349*/
    a1[8] = v7; /*0x10042934d*/
    *a1 = 1; /*0x100429351*/
    ++*a2; /*0x100429358*/
    return result; /*0x10042935b*/
  }
  v27 = v34; /*0x10042929f*/
  v26 = v33; /*0x1004292a7*/
  v25 = v32; /*0x1004292af*/
  v24 = v31; /*0x1004292b7*/
  v23 = v30; /*0x1004292bf*/
  v22 = v29; /*0x1004292ce*/
  v21 = v28; /*0x1004292d5*/
  v20 = v11; /*0x1004292dc*/
  ++*a2; /*0x1004292e3*/
  if ( v7 ) /*0x1004292e9*/
  {
    if ( a4 <= v7 ) /*0x1004292f5*/
    {
      if ( a4 != v7 ) /*0x100429360*/
LABEL_6:
        core::str::slice_error_fail::h480e51fbd8b15eba(); /*0x1004292fe*/
    }
    else if ( *(char *)(a3 + v7) < -64 ) /*0x1004292fc*/
    {
      goto LABEL_6; /*0x1004292fc*/
    }
    rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(&v11, a2, v7 + a3, a4 - v7, a5); /*0x100429372*/
    v28 = v12; /*0x100429384*/
    v29 = v13; /*0x10042938f*/
    v30 = v14; /*0x10042939a*/
    v31 = v15; /*0x1004293a5*/
    v32 = v16; /*0x1004293b0*/
    v33 = v17; /*0x1004293bb*/
    v34 = v18; /*0x1004293c6*/
    v35 = v19; /*0x1004293d1*/
    if ( (_DWORD)v11 == 1 ) /*0x1004293d8*/
    {
      a1[8] = v35; /*0x1004293de*/
      a1[7] = v34; /*0x1004293e6*/
      a1[6] = v33; /*0x1004293ee*/
      a1[5] = v32; /*0x1004293f6*/
      a1[4] = v31; /*0x1004293fe*/
      a1[3] = v30; /*0x100429406*/
      v9 = v28; /*0x10042940a*/
      a1[2] = v29; /*0x100429412*/
LABEL_13:
      a1[1] = v9; /*0x10042948b*/
      *a1 = 1; /*0x10042948f*/
      return core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::hd8e78dacb288599b(&v20); /*0x1004294a2*/
    }
    v10[7] = v35; /*0x10042941c*/
    v10[6] = v34; /*0x100429427*/
    v10[5] = v33; /*0x100429432*/
    v10[4] = v32; /*0x10042943d*/
    v10[3] = v31; /*0x100429448*/
    v10[2] = v30; /*0x100429453*/
    v10[1] = v29; /*0x100429462*/
    v10[0] = v28; /*0x100429469*/
    if ( v35 ) /*0x100429473*/
    {
      core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::hd8e78dacb288599b(v10); /*0x10042947c*/
      v9 = 0x8000000000000012LL; /*0x100429481*/
      goto LABEL_13; /*0x100429481*/
    }
    core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::hd8e78dacb288599b(v10); /*0x1004294ab*/
  }
  a1[8] = v27; /*0x1004294b4*/
  a1[7] = v26; /*0x1004294bc*/
  a1[6] = v25; /*0x1004294c4*/
  a1[5] = v24; /*0x1004294cc*/
  a1[4] = v23; /*0x1004294d7*/
  a1[3] = v22; /*0x1004294e2*/
  result = v20; /*0x1004294e6*/
  a1[2] = v21; /*0x1004294f4*/
  a1[1] = result; /*0x1004294f8*/
  *a1 = 0; /*0x1004294fc*/
  return result; /*0x100429503*/
}