// usage_data_fields_flatten_sys (shared) @ 0x14037dc40 (win, AiMaMi 1.1.8)
__int64 __fastcall usage_data_fields_flatten_sys(__m128i *a1, __int64 a2)
{
  int v4; // r13d
  __int64 v5; // r14
  char v6; // si
  __m128 v7; // xmm6
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  bool v10; // of
  char v11; // bl
  __m128i *v12; // rsi
  __int64 result; // rax
  __m128i v14[11]; // [rsp+20h] [rbp-60h] BYREF
  __m128i v15; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v16; // [rsp+E0h] [rbp+60h]
  unsigned __int64 v17; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v18; // [rsp+228h] [rbp+1A8h]
  __m128i v19[11]; // [rsp+370h] [rbp+2F0h] BYREF
  unsigned __int64 v20; // [rsp+420h] [rbp+3A0h]
  __int64 v21; // [rsp+428h] [rbp+3A8h]
  __int64 v22; // [rsp+430h] [rbp+3B0h]
  __int64 v23; // [rsp+438h] [rbp+3B8h] BYREF
  char v24; // [rsp+440h] [rbp+3C0h]
  char v25; // [rsp+441h] [rbp+3C1h]
  unsigned __int64 v26; // [rsp+448h] [rbp+3C8h]
  __int64 v27; // [rsp+450h] [rbp+3D0h]
  __int64 v28; // [rsp+458h] [rbp+3D8h]
  unsigned __int64 v29; // [rsp+460h] [rbp+3E0h]
  __int64 v30; // [rsp+468h] [rbp+3E8h]
  __int64 v31; // [rsp+470h] [rbp+3F0h]
  char v32; // [rsp+478h] [rbp+3F8h]
  unsigned __int64 v33; // [rsp+480h] [rbp+400h]
  __int128 v34; // [rsp+488h] [rbp+408h]
  char v35; // [rsp+498h] [rbp+418h]
  __int64 v36; // [rsp+4A0h] [rbp+420h]
  int v37; // [rsp+4A8h] [rbp+428h]
  char v38; // [rsp+4ACh] [rbp+42Ch]
  __int128 v39; // [rsp+4B0h] [rbp+430h]
  __m128i *v40; // [rsp+4C8h] [rbp+448h]
  __int64 v41; // [rsp+4D0h] [rbp+450h]
  __int64 v42; // [rsp+4D8h] [rbp+458h]
  __int64 v43; // [rsp+4E0h] [rbp+460h]
  __int64 v44; // [rsp+4E8h] [rbp+468h]
  __int64 v45; // [rsp+4F0h] [rbp+470h]
  unsigned __int64 v46; // [rsp+4F8h] [rbp+478h]
  unsigned __int64 v47; // [rsp+500h] [rbp+480h]
  unsigned __int64 v48; // [rsp+508h] [rbp+488h]
  char v49; // [rsp+515h] [rbp+495h]
  char v50; // [rsp+516h] [rbp+496h]
  char v51; // [rsp+517h] [rbp+497h]
  __int64 v52; // [rsp+518h] [rbp+498h]

  v52 = -2; /*0x14037dc62*/
  sub_14037AD50(v14, a2 + 336); /*0x14037dc7e*/
  v4 = *(_DWORD *)(a2 + 648); /*0x14037dc83*/
  if ( __OFSUB__(0, *(_QWORD *)(a2 + 552)) ) /*0x14037dc8c*/
  {
    v47 = 0x8000000000000000uLL; /*0x14037dc9f*/
    v5 = *(_QWORD *)(a2 + 640); /*0x14037dca6*/
    if ( *(_DWORD *)a2 == 2 ) /*0x14037dcb0*/
    {
LABEL_3:
      v15.m128i_i64[0] = 2; /*0x14037dcb2*/
      goto LABEL_6; /*0x14037dcba*/
    }
  }
  else
  {
    sub_14108F780(&v17, a2 + 552); /*0x14037dcca*/
    v47 = v17; /*0x14037dcd7*/
    v41 = *((_QWORD *)&v18 + 1); /*0x14037dcf3*/
    v44 = v18; /*0x14037dcf3*/
    v5 = *(_QWORD *)(a2 + 640); /*0x14037dcfa*/
    if ( *(_DWORD *)a2 == 2 ) /*0x14037dd04*/
      goto LABEL_3; /*0x14037dd04*/
  }
  sub_14037CE60(&v17, a2); /*0x14037dd10*/
  sub_1412762D0(&v15, (const __m128i *)&v17, 0x150u); /*0x14037dd27*/
LABEL_6:
  v50 = *(_BYTE *)(a2 + 652); /*0x14037dd2c*/
  v6 = *(_BYTE *)(a2 + 544); /*0x14037dd40*/
  v49 = *(_BYTE *)(a2 + 545); /*0x14037dd4e*/
  v7 = (__m128)*(unsigned __int64 *)(a2 + 536); /*0x14037dd54*/
  sub_14108F780(&v17, a2 + 512); /*0x14037dd63*/
  v46 = v17; /*0x14037dd70*/
  v8 = *((_QWORD *)&v18 + 1); /*0x14037dd85*/
  v43 = v18; /*0x14037dd85*/
  v51 = *(_BYTE *)(a2 + 600); /*0x14037dd93*/
  v9 = 0x8000000000000000uLL; /*0x14037dd99*/
  v10 = __OFSUB__(0, *(_QWORD *)(a2 + 576)); /*0x14037dda5*/
  v40 = a1; /*0x14037ddac*/
  if ( v10 ) /*0x14037ddb3*/
  {
    v48 = 0x8000000000000000uLL; /*0x14037ddb5*/
    v11 = *(_BYTE *)(a2 + 632); /*0x14037ddbc*/
    if ( __OFSUB__(0, *(_QWORD *)(a2 + 608)) ) /*0x14037ddc5*/
      goto LABEL_11; /*0x14037ddcc*/
    goto LABEL_10; /*0x14037ddcc*/
  }
  sub_14108F780(&v17, a2 + 576); /*0x14037ddde*/
  v48 = v17; /*0x14037ddeb*/
  v42 = *((_QWORD *)&v18 + 1); /*0x14037de07*/
  v45 = v18; /*0x14037de07*/
  v11 = *(_BYTE *)(a2 + 632); /*0x14037de0e*/
  if ( !__OFSUB__(0, *(_QWORD *)(a2 + 608)) ) /*0x14037de1e*/
  {
LABEL_10:
    sub_14108F780(&v17, a2 + 608); /*0x14037de20*/
    v9 = v17; /*0x14037de34*/
    v39 = v18; /*0x14037de42*/
  }
LABEL_11:
  sub_1412762D0(v19, v14, 0xB0u); /*0x14037de49*/
  v37 = v4; /*0x14037de5f*/
  v26 = v47; /*0x14037de6d*/
  v27 = v44; /*0x14037de7b*/
  v28 = v41; /*0x14037de89*/
  v36 = v5; /*0x14037de90*/
  sub_1412762D0((__m128i *)&v17, &v15, 0x150u); /*0x14037dea8*/
  v38 = v50; /*0x14037deb4*/
  v20 = v46; /*0x14037dec1*/
  v21 = v43; /*0x14037decf*/
  v22 = v8; /*0x14037ded6*/
  _mm_storel_ps((double *)&v23, v7); /*0x14037dedd*/
  v24 = v6; /*0x14037dee4*/
  v25 = v49; /*0x14037def2*/
  v29 = v48; /*0x14037deff*/
  v30 = v45; /*0x14037df0d*/
  v31 = v42; /*0x14037df1b*/
  v32 = v51; /*0x14037df29*/
  v33 = v9; /*0x14037df2f*/
  v34 = v39; /*0x14037df3d*/
  v35 = v11; /*0x14037df44*/
  sub_1402173C0(&v15, a2 + 656); /*0x14037df58*/
  v12 = v40; /*0x14037df6b*/
  sub_1412762D0(v40, (const __m128i *)&v17, 0x290u); /*0x14037df75*/
  v12[41] = v15; /*0x14037df7e*/
  result = v16; /*0x14037df85*/
  v12[42].m128i_i64[0] = v16; /*0x14037df89*/
  return result; /*0x14037df90*/
}
