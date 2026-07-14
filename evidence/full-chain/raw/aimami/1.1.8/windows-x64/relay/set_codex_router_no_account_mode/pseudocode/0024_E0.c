// win 1.1.8 set_codex_router_no_account_mode node va=0x1400271e0 depth=1
// E0
__int64 __fastcall sub_1400271E0(__int64 a1)
{
  __int64 result; // rax
  __m128i v4[13]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v5[6]; // [rsp+100h] [rbp+80h] BYREF
  __m128i v6[9]; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v7; // [rsp+1C8h] [rbp+148h]
  __int64 v8; // [rsp+1D0h] [rbp+150h]
  __int64 v9; // [rsp+1E0h] [rbp+160h]
  __int64 v10; // [rsp+1E8h] [rbp+168h]
  _QWORD *v11; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v12; // [rsp+200h] [rbp+180h] BYREF
  volatile signed __int64 *v13; // [rsp+208h] [rbp+188h]
  __int64 v14; // [rsp+210h] [rbp+190h]

  v14 = -2; /*0x1400271f1*/
  sub_140026BF0(v6, a1); /*0x140027209*/
  result = -v6[0].m128i_i64[0]; /*0x140027218*/
  if ( __OFSUB__(-v6[0].m128i_i64[0], 1) ) /*0x140027218*/
  {
    v13 = (volatile signed __int64 *)v6[0].m128i_i64[1]; /*0x140027224*/
    v12 = v6[0].m128i_i64[1]; /*0x14002722b*/
    sub_14075DCD0((unsigned int)v4, *(_DWORD *)(a1 + 136) + 4744, a1, (unsigned int)&unk_141313F03, 4); /*0x140027255*/
    if ( v4[0].m128i_i32[0] == 3 ) /*0x14002725f*/
    {
      result = (__int64)v13; /*0x140027261*/
      if ( !_InterlockedDecrement64(v13) ) /*0x140027268*/
        return sub_140E0A3B0(&v12); /*0x140027275*/
    }
    else
    {
      sub_1412762D0(v6, v4, 0xD0u); /*0x1400272b8*/
      sub_14005B2B0(v5, v6, v13); /*0x1400272cf*/
      if ( v5[0] != 0x8000000000000025uLL ) /*0x1400272e6*/
        sub_140044A40(v5); /*0x1400272ef*/
      if ( v7 ) /*0x1400272ff*/
        sub_140001370(v8, v7, 1); /*0x14002730e*/
      if ( v9 ) /*0x14002731d*/
        sub_140001370(v10, v9, 1); /*0x14002732c*/
      if ( (*v11)-- == 1 ) /*0x140027338*/
        sub_1400DD3B0(&v11); /*0x140027344*/
      return (__int64)sub_1400453B0((__int64)v6); /*0x140027351*/
    }
  }
  else if ( v6[0].m128i_i64[0] ) /*0x140027285*/
  {
    return sub_140001370(v6[0].m128i_i64[1], v6[0].m128i_i64[0], 1); /*0x140027294*/
  }
  return result; /*0x14002727b*/
}