// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND breaker_select_candidates node 0x1007efe60 depth=4
unsigned __int64 __fastcall _$LT$core..hash..sip..Hasher$LT$S$GT$$u20$as$u20$core..hash..Hasher$GT$::write::h1d8db205c8c4d35e(
        __int64 *a1,
        unsigned int *a2,
        unsigned __int64 a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r11
  __int64 v6; // r10
  unsigned __int64 result; // rax
  __int64 v8; // r11
  __int64 v9; // r10
  __int64 v10; // rax
  __int64 v11; // r11
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r11
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r11
  __int64 v24; // r10
  __int64 v25; // rbx
  __int64 v26; // r11
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r10
  __int64 v30; // r11
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // r8

  a1[6] += a3; /*0x1007efe65*/
  v3 = a1[8]; /*0x1007efe69*/
  if ( !v3 ) /*0x1007efe70*/
  {
    v4 = 0; /*0x1007efea1*/
    goto LABEL_15; /*0x1007efea4*/
  }
  v4 = 8 - v3; /*0x1007efe78*/
  v5 = a3; /*0x1007efe7e*/
  if ( 8 - v3 < a3 ) /*0x1007efe81*/
    v5 = 8 - v3; /*0x1007efe81*/
  if ( v5 >= 4 ) /*0x1007efe89*/
  {
    v6 = *a2; /*0x1007efe8b*/
    result = 4; /*0x1007efe8e*/
    if ( v5 <= 5 ) /*0x1007efe9d*/
      goto LABEL_10; /*0x1007efe9d*/
    goto LABEL_9; /*0x1007efe9d*/
  }
  result = 0; /*0x1007efea9*/
  v6 = 0; /*0x1007efeab*/
  if ( v5 > 1 ) /*0x1007efeb8*/
  {
LABEL_9:
    v6 |= (unsigned __int64)*(unsigned __int16 *)((char *)a2 + result) << (8 * (unsigned __int8)result); /*0x1007efeba*/
    result |= 2u; /*0x1007efecb*/
  }
LABEL_10:
  if ( result < v5 ) /*0x1007efed2*/
  {
    v8 = *((unsigned __int8 *)a2 + result); /*0x1007efed4*/
    result = (unsigned int)(8 * result); /*0x1007efed9*/
    v6 |= v8 << result; /*0x1007efee1*/
  }
  v9 = a1[7] | (v6 << (8 * (unsigned __int8)v3)); /*0x1007efeef*/
  a1[7] = v9; /*0x1007efef3*/
  if ( a3 < v4 ) /*0x1007efefa*/
  {
    a1[8] = a3 + v3; /*0x1007efeff*/
    return result; /*0x1007eff05*/
  }
  v10 = v9 ^ a1[3]; /*0x1007eff0a*/
  v11 = a1[2]; /*0x1007eff0d*/
  v12 = v11 + *a1; /*0x1007eff14*/
  v13 = v10 + a1[1]; /*0x1007eff1b*/
  v14 = v12 ^ __ROL8__(v11, 13); /*0x1007eff22*/
  v15 = v13 ^ __ROL8__(v10, 16); /*0x1007eff2d*/
  v16 = v14 + v13; /*0x1007eff30*/
  v17 = v15 + __ROL8__(v12, 32); /*0x1007eff37*/
  a1[2] = v16 ^ __ROL8__(v14, 17); /*0x1007eff41*/
  a1[3] = v17 ^ __ROL8__(v15, 21); /*0x1007eff4c*/
  a1[1] = __ROL8__(v16, 32); /*0x1007eff50*/
  *a1 = v9 ^ v17; /*0x1007eff57*/
LABEL_15:
  v18 = a3 - v4; /*0x1007eff5a*/
  v19 = v18 & 7; /*0x1007eff60*/
  v20 = v18 & 0xFFFFFFFFFFFFFFF8LL; /*0x1007eff64*/
  if ( v4 < v20 ) /*0x1007eff6b*/
  {
    v21 = *a1; /*0x1007eff6d*/
    v22 = a1[1]; /*0x1007eff70*/
    v23 = a1[3]; /*0x1007eff74*/
    v24 = a1[2]; /*0x1007eff78*/
    do /*0x1007effc1*/
    {
      v25 = *(_QWORD *)((char *)a2 + v4); /*0x1007eff80*/
      v26 = v25 ^ v23; /*0x1007eff84*/
      v27 = v24 + v21; /*0x1007eff87*/
      v28 = v26 + v22; /*0x1007eff8e*/
      v29 = v27 ^ __ROL8__(v24, 13); /*0x1007eff91*/
      v30 = v28 ^ __ROL8__(v26, 16); /*0x1007eff98*/
      v31 = v29 + v28; /*0x1007eff9f*/
      v32 = v30 + __ROL8__(v27, 32); /*0x1007effa2*/
      v24 = v31 ^ __ROL8__(v29, 17); /*0x1007effa9*/
      v22 = __ROL8__(v31, 32); /*0x1007effb0*/
      v23 = v32 ^ __ROL8__(v30, 21); /*0x1007effb4*/
      v21 = v25 ^ v32; /*0x1007effb7*/
      v4 += 8LL; /*0x1007effba*/
    }
    while ( v4 < v20 ); /*0x1007effc1*/
    a1[3] = v23; /*0x1007effc3*/
    a1[2] = v24; /*0x1007effc7*/
    a1[1] = v22; /*0x1007effcb*/
    *a1 = v21; /*0x1007effcf*/
  }
  if ( (unsigned int)v19 >= 4 ) /*0x1007effd6*/
  {
    v33 = *(unsigned int *)((char *)a2 + v4); /*0x1007effd8*/
    result = 4; /*0x1007effdc*/
    if ( (unsigned int)v19 <= 5 ) /*0x1007effe9*/
      goto LABEL_24; /*0x1007effe9*/
    goto LABEL_23; /*0x1007effe9*/
  }
  result = 0; /*0x1007effed*/
  v33 = 0; /*0x1007effef*/
  if ( (unsigned int)v19 > 1 ) /*0x1007efff9*/
  {
LABEL_23:
    v33 |= (unsigned __int64)*(unsigned __int16 *)((char *)a2 + v4 + result) << (8 * (unsigned __int8)result); /*0x1007efffb*/
    result |= 2u; /*0x1007f0011*/
  }
LABEL_24:
  if ( (unsigned int)result < (unsigned int)v19 ) /*0x1007f0018*/
  {
    v34 = result + v4; /*0x1007f001a*/
    result = (unsigned int)(8 * result); /*0x1007f0022*/
    v33 |= (unsigned __int64)*((unsigned __int8 *)a2 + v34) << result; /*0x1007f002a*/
  }
  a1[7] = v33; /*0x1007f002d*/
  a1[8] = v19; /*0x1007f0031*/
  return result; /*0x1007eff03*/
}