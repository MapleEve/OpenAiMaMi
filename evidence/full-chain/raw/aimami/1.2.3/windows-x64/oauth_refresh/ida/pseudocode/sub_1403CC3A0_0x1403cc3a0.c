// module: codexmate_lib/core/oauth_refresh
// addr: 0x1403cc3a0
// name: sub_1403CC3A0
// win 1.2.1 | module src/core/oauth_refresh.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1403CC3A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // esi
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rdi
  _BYTE v17[152]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v18[152]; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v19; // [rsp+150h] [rbp+D0h] BYREF
  char v20[8]; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v21; // [rsp+160h] [rbp+E0h]
  __int64 v22; // [rsp+168h] [rbp+E8h]
  __int64 v23; // [rsp+170h] [rbp+F0h]
  __int64 v24; // [rsp+178h] [rbp+F8h]
  __int64 v25; // [rsp+180h] [rbp+100h]
  __int64 v26; // [rsp+190h] [rbp+110h]
  __int64 v27; // [rsp+198h] [rbp+118h]
  __int64 v28; // [rsp+1A8h] [rbp+128h]
  __int64 v29; // [rsp+1B0h] [rbp+130h]
  __int64 v30; // [rsp+1C0h] [rbp+140h]
  __int64 v31; // [rsp+1C8h] [rbp+148h]
  __int64 v32; // [rsp+1E8h] [rbp+168h] BYREF
  char v33[8]; // [rsp+1F0h] [rbp+170h] BYREF
  __int64 v34; // [rsp+1F8h] [rbp+178h]
  __int64 v35; // [rsp+200h] [rbp+180h]
  __int64 v36; // [rsp+208h] [rbp+188h]
  __int64 v37; // [rsp+210h] [rbp+190h]
  __int64 v38; // [rsp+218h] [rbp+198h]
  __int64 v39; // [rsp+228h] [rbp+1A8h]
  __int64 v40; // [rsp+230h] [rbp+1B0h]
  __int64 v41; // [rsp+240h] [rbp+1C0h]
  __int64 v42; // [rsp+248h] [rbp+1C8h]
  __int64 v43; // [rsp+258h] [rbp+1D8h]
  __int64 v44; // [rsp+260h] [rbp+1E0h]
  __int64 v45; // [rsp+280h] [rbp+200h]
  __int64 v46; // [rsp+288h] [rbp+208h]
  __int64 v47; // [rsp+290h] [rbp+210h]
  __int64 v48; // [rsp+298h] [rbp+218h]
  __int64 v49; // [rsp+2A0h] [rbp+220h]
  __int64 v50; // [rsp+2A8h] [rbp+228h]
  __int64 v51; // [rsp+2B0h] [rbp+230h]
  __int64 v52; // [rsp+2B8h] [rbp+238h]
  __int64 v53; // [rsp+2C0h] [rbp+240h]
  __int64 v54; // [rsp+2C8h] [rbp+248h]
  __int64 v55; // [rsp+2D0h] [rbp+250h]
  __int64 v56; // [rsp+2D8h] [rbp+258h]
  __int64 v57; // [rsp+2E0h] [rbp+260h]
  __int64 v58; // [rsp+2E8h] [rbp+268h]
  __int64 v59; // [rsp+2F0h] [rbp+270h]

  v59 = -2;
  if ( (unsigned __int8)sub_1403CCAD0(a1) || (unsigned __int8)sub_1403CCAD0(a2) )
    return 0;
  sub_1403C9DD0(v18, a1, a3, a4);
  sub_1403C9DD0(v17, a2, a3, a4);
  sub_141684120(&v19, v18, 152);
  sub_141684120(&v32, v17, 152);
  v8 = v32;
  if ( v19 == 2 || (_DWORD)v32 == 2 )
  {
    v58 = v32;
    if ( (_DWORD)v19 == 2 )
    {
      sub_14034ED40(v20);
    }
    else
    {
      if ( v21 )
        sub_140001660(v22, v21, 1);
      if ( v24 )
        sub_140001660(v25, v24, 1);
      if ( v26 > 0 )
        sub_140001660(v27, v26, 1);
      if ( v28 > 0 )
        sub_140001660(v29, v28, 1);
      if ( v30 > 0 )
        sub_140001660(v31, v30, 1);
    }
    if ( (_DWORD)v58 == 2 )
    {
      sub_14034ED40(v33);
    }
    else
    {
      if ( v34 )
        sub_140001660(v35, v34, 1);
      if ( v37 )
        sub_140001660(v38, v37, 1);
      if ( v39 > 0 )
        sub_140001660(v40, v39, 1);
      if ( v41 > 0 )
        sub_140001660(v42, v41, 1);
      if ( v43 > 0 )
        sub_140001660(v44, v43, 1);
    }
    return 0;
  }
  v48 = v21;
  v47 = v24;
  v52 = v25;
  v46 = v26;
  v51 = v27;
  v45 = v28;
  v50 = v29;
  v58 = v30;
  v49 = v31;
  v10 = v34;
  v11 = v35;
  v12 = v37;
  v57 = v38;
  v13 = v39;
  v56 = v40;
  v14 = v41;
  v55 = v42;
  v15 = v43;
  v54 = v44;
  v53 = v22;
  if ( v23 == v36 )
  {
    LOBYTE(v8) = (unsigned int)sub_1416847B0(v22, v35, v23) == 0;
    if ( !v10 )
      goto LABEL_26;
    goto LABEL_25;
  }
  v8 = 0;
  if ( v34 )
LABEL_25:
    sub_140001660(v11, v10, 1);
LABEL_26:
  if ( v12 )
    sub_140001660(v57, v12, 1);
  if ( v13 > 0 )
    sub_140001660(v56, v13, 1);
  if ( v14 > 0 )
    sub_140001660(v55, v14, 1);
  if ( v15 > 0 )
    sub_140001660(v54, v15, 1);
  if ( v48 )
    sub_140001660(v53, v48, 1);
  v16 = v58;
  if ( v47 )
    sub_140001660(v52, v47, 1);
  if ( v46 > 0 )
    sub_140001660(v51, v46, 1);
  if ( v45 > 0 )
    sub_140001660(v50, v45, 1);
  if ( v16 > 0 )
    sub_140001660(v49, v16, 1);
  return v8;
}