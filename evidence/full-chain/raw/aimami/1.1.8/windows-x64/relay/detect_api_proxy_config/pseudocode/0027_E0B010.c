// win 1.1.8 detect_api_proxy_config node va=0x140e0b010 depth=2
// E0B010
__int64 __fastcall sub_140E0B010(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 i; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 j; // rax
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 result; // rax
  __int64 v29; // rdx
  _QWORD v30[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v31; // [rsp+30h] [rbp-50h]
  __int64 v32; // [rsp+38h] [rbp-48h] BYREF
  __int64 v33; // [rsp+40h] [rbp-40h]
  __int64 v34; // [rsp+48h] [rbp-38h]
  __int64 v35; // [rsp+50h] [rbp-30h]
  __int64 v36; // [rsp+58h] [rbp-28h]
  __int64 v37; // [rsp+60h] [rbp-20h]
  __int64 v38; // [rsp+68h] [rbp-18h]
  __int64 v39; // [rsp+70h] [rbp-10h]
  __int64 v40; // [rsp+78h] [rbp-8h]
  __int64 v41; // [rsp+80h] [rbp+0h]
  _QWORD *v42; // [rsp+88h] [rbp+8h]
  __int64 v43; // [rsp+90h] [rbp+10h]
  __int64 v44; // [rsp+98h] [rbp+18h]

  v44 = -2; /*0x140e0b022*/
  v1 = *a1; /*0x140e0b02a*/
  v41 = *a1 + 16; /*0x140e0b031*/
  v43 = v1; /*0x140e0b03c*/
  sub_140E28790(v1 + 5072); /*0x140e0b040*/
  v2 = *(_QWORD *)(v43 + 5096); /*0x140e0b04a*/
  if ( v2 ) /*0x140e0b054*/
  {
    v3 = *(_QWORD *)(v43 + 5104); /*0x140e0b056*/
    v4 = *(_QWORD *)(v43 + 5112); /*0x140e0b05d*/
    v33 = 0; /*0x140e0b064*/
    v34 = v2; /*0x140e0b06c*/
    v35 = v3; /*0x140e0b070*/
    v37 = 0; /*0x140e0b074*/
    v38 = v2; /*0x140e0b07c*/
    v39 = v3; /*0x140e0b080*/
    v5 = 1; /*0x140e0b084*/
  }
  else
  {
    v5 = 0; /*0x140e0b08b*/
    v4 = 0; /*0x140e0b08d*/
  }
  v32 = v5; /*0x140e0b08f*/
  v36 = v5; /*0x140e0b093*/
  v40 = v4; /*0x140e0b097*/
  sub_140E289D0(&v32); /*0x140e0b09f*/
  v6 = *(_QWORD *)(v43 + 5120); /*0x140e0b0a9*/
  if ( v6 ) /*0x140e0b0b3*/
  {
    v7 = *(_QWORD *)(v43 + 5128); /*0x140e0b0b5*/
    v8 = *(_QWORD *)(v43 + 5136); /*0x140e0b0bc*/
    v33 = 0; /*0x140e0b0c3*/
    v34 = v6; /*0x140e0b0cb*/
    v35 = v7; /*0x140e0b0cf*/
    v37 = 0; /*0x140e0b0d3*/
    v38 = v6; /*0x140e0b0db*/
    v39 = v7; /*0x140e0b0df*/
    v9 = 1; /*0x140e0b0e3*/
  }
  else
  {
    v9 = 0; /*0x140e0b0ea*/
    v8 = 0; /*0x140e0b0ec*/
  }
  v32 = v9; /*0x140e0b0ee*/
  v36 = v9; /*0x140e0b0f2*/
  v40 = v8; /*0x140e0b0f6*/
  sub_140E289D0(&v32); /*0x140e0b0fe*/
  sub_140E284B0(v43 + 5144); /*0x140e0b10f*/
  v10 = *(_QWORD *)(v43 + 5168); /*0x140e0b119*/
  if ( v10 ) /*0x140e0b123*/
  {
    v11 = *(_QWORD *)(v43 + 5176); /*0x140e0b125*/
    v12 = *(_QWORD *)(v43 + 5184); /*0x140e0b12c*/
    v33 = 0; /*0x140e0b133*/
    v34 = v10; /*0x140e0b13b*/
    v35 = v11; /*0x140e0b13f*/
    v37 = 0; /*0x140e0b143*/
    v38 = v10; /*0x140e0b14b*/
    v39 = v11; /*0x140e0b14f*/
    v13 = 1; /*0x140e0b153*/
  }
  else
  {
    v13 = 0; /*0x140e0b15a*/
    v12 = 0; /*0x140e0b15c*/
  }
  v32 = v13; /*0x140e0b15e*/
  v36 = v13; /*0x140e0b162*/
  v40 = v12; /*0x140e0b166*/
  sub_140E24F20(v30, &v32); /*0x140e0b172*/
  for ( i = v30[0]; v30[0]; i = v30[0] ) /*0x140e0b17f*/
  {
    sub_140E26EC0(i, v31); /*0x140e0b194*/
    sub_140E24F20(v30, &v32); /*0x140e0b1a0*/
  }
  v15 = *(_QWORD *)(v43 + 5192); /*0x140e0b1b3*/
  if ( v15 ) /*0x140e0b1bd*/
  {
    v16 = *(_QWORD *)(v43 + 5200); /*0x140e0b1bf*/
    v17 = *(_QWORD *)(v43 + 5208); /*0x140e0b1c6*/
    v33 = 0; /*0x140e0b1cd*/
    v34 = v15; /*0x140e0b1d5*/
    v35 = v16; /*0x140e0b1d9*/
    v37 = 0; /*0x140e0b1dd*/
    v38 = v15; /*0x140e0b1e5*/
    v39 = v16; /*0x140e0b1e9*/
    v18 = 1; /*0x140e0b1ed*/
  }
  else
  {
    v18 = 0; /*0x140e0b1f4*/
    v17 = 0; /*0x140e0b1f6*/
  }
  v32 = v18; /*0x140e0b1f8*/
  v36 = v18; /*0x140e0b1fc*/
  v40 = v17; /*0x140e0b200*/
  sub_140E25F20(v30, &v32); /*0x140e0b20c*/
  for ( j = v30[0]; v30[0]; j = v30[0] ) /*0x140e0b219*/
  {
    sub_140872EA0(j + 40 * v31 + 104); /*0x140e0b240*/
    sub_140E25F20(v30, &v32); /*0x140e0b24c*/
  }
  sub_140872EA0(v43 + 5224); /*0x140e0b266*/
  sub_140E060C0(v43 + 4648); /*0x140e0b277*/
  sub_140E06180(v43 + 4288); /*0x140e0b288*/
  sub_140E05F90(v43 + 4744); /*0x140e0b299*/
  sub_140E05E10(v43 + 4896); /*0x140e0b2aa*/
  v42 = (_QWORD *)(v43 + 5272); /*0x140e0b2bb*/
  sub_140218990(); /*0x140e0b2bf*/
  v20 = v43; /*0x140e0b2cf*/
  if ( *v42 ) /*0x140e0b2c9*/
    sub_140001370(*(_QWORD *)(v43 + 5280), 16LL * *v42, 8); /*0x140e0b2e6*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v20 + 5008)) ) /*0x140e0b2f2*/
    sub_140E0AD50(v43 + 5008); /*0x140e0b303*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v43 + 5016)) ) /*0x140e0b314*/
    sub_140E0A320((__int64 *)(v43 + 5016)); /*0x140e0b325*/
  sub_140E06A90(v41); /*0x140e0b32f*/
  v41 = *(_QWORD *)(v43 + 5024); /*0x140e0b340*/
  v42 = *(_QWORD **)(v43 + 5032); /*0x140e0b34b*/
  if ( *v42 ) /*0x140e0b34f*/
    ((void (__fastcall *)(__int64))*v42)(v41); /*0x140e0b35b*/
  v21 = v42[1]; /*0x140e0b366*/
  if ( v21 ) /*0x140e0b36d*/
    sub_140001370(v41, v21, v42[2]); /*0x140e0b373*/
  v22 = v43; /*0x140e0b378*/
  v23 = *(_QWORD *)(v43 + 4624); /*0x140e0b37c*/
  if ( v23 > 0 ) /*0x140e0b386*/
    sub_140001370(*(_QWORD *)(v43 + 4632), v23, 1); /*0x140e0b395*/
  v24 = *(_QWORD *)(v22 + 4488); /*0x140e0b39a*/
  if ( v24 ) /*0x140e0b3a4*/
    sub_140001370(*(_QWORD *)(v22 + 4496), v24, 1); /*0x140e0b3b3*/
  sub_14105CE30(v22 + 4512); /*0x140e0b3bf*/
  sub_14105CE30(v43 + 4520); /*0x140e0b3d0*/
  v25 = v43; /*0x140e0b3d6*/
  if ( _InterlockedDecrement64(*(volatile signed __int64 **)(v43 + 5040)) ) /*0x140e0b3e1*/
  {
    if ( _InterlockedDecrement64(*(volatile signed __int64 **)(v25 + 5048)) ) /*0x140e0b3ee*/
      goto LABEL_33; /*0x140e0b3f2*/
LABEL_36:
    sub_140A982C0(v25 + 5048); /*0x140e0b41c*/
    if ( _InterlockedDecrement64(*(volatile signed __int64 **)(v25 + 5056)) ) /*0x140e0b42f*/
      goto LABEL_38; /*0x140e0b433*/
    goto LABEL_37; /*0x140e0b433*/
  }
  sub_140E0AFE0(v25 + 5040); /*0x140e0b40a*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v25 + 5048)) ) /*0x140e0b416*/
    goto LABEL_36; /*0x140e0b41a*/
LABEL_33:
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v25 + 5056)) ) /*0x140e0b3ff*/
LABEL_37:
    sub_140E0ACC0(v43 + 5056); /*0x140e0b435*/
LABEL_38:
  v26 = v43; /*0x140e0b446*/
  v27 = *(_QWORD *)(v43 + 4600); /*0x140e0b44a*/
  if ( v27 ) /*0x140e0b454*/
    sub_140001370(*(_QWORD *)(v43 + 4608), v27, 1); /*0x140e0b463*/
  result = *(_QWORD *)(v26 + 5296); /*0x140e0b468*/
  v41 = result; /*0x140e0b46f*/
  if ( result ) /*0x140e0b476*/
  {
    v42 = *(_QWORD **)(v26 + 5304); /*0x140e0b47f*/
    if ( *v42 ) /*0x140e0b483*/
      ((void (__fastcall *)(__int64))*v42)(v41); /*0x140e0b48f*/
    result = (__int64)v42; /*0x140e0b492*/
    v29 = v42[1]; /*0x140e0b496*/
    v26 = v43; /*0x140e0b49d*/
    if ( v29 ) /*0x140e0b4a1*/
      result = sub_140001370(v41, v29, v42[2]); /*0x140e0b4ab*/
  }
  if ( v26 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v26 + 8)) ) /*0x140e0b4b6*/
    return sub_140001370(v26, 5320, 8); /*0x140e0b4d5*/
  return result; /*0x140e0b4cb*/
}