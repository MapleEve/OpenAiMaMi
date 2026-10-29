// win 1.2.7 latest-exe | module src/core/relay/managed_blocks.rs | ea 0x1408cd0f0 | successor of pre-update 0x140efdf00 | session <审计会话>
// match evidence: {"body_sim": 0.406, "str_ov": 0, "anchor": 0.356, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
double __fastcall sub_1408CD0F0(__int64 *a1, char *a2, __int64 a3)
{
  char *v3; // rbx
  unsigned __int8 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  char i; // r13
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r12
  unsigned int v15; // r15d
  int v16; // ecx
  int v17; // r9d
  int v18; // r15d
  unsigned __int8 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // r8
  char v23; // cl
  unsigned int v24; // r8d
  char v25; // r8
  unsigned int v26; // r9d
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // r14
  double result; // xmm0_8
  __int64 v31; // [rsp+30h] [rbp-20h] BYREF
  __int64 v32; // [rsp+38h] [rbp-18h]
  __int64 v33; // [rsp+40h] [rbp-10h]
  __int64 v34; // [rsp+48h] [rbp-8h]
  __int64 v35; // [rsp+50h] [rbp+0h]

  v35 = -2;
  v3 = a2;
  v31 = 0;
  v32 = 1;
  v33 = 0;
  v5 = (unsigned __int8 *)&a2[a3];
  v6 = 1;
  v7 = 0;
  for ( i = 0; v3 != (char *)v5; v33 = v7 )
  {
    while ( 1 )
    {
      v15 = (unsigned __int8)*v3;
      if ( *v3 >= 0 )
      {
        ++v3;
      }
      else
      {
        v16 = v15 & 0x1F;
        v17 = v3[1] & 0x3F;
        if ( (unsigned __int8)v15 <= 0xDFu )
        {
          v3 += 2;
          v15 = v17 | (v16 << 6);
        }
        else
        {
          v18 = (v17 << 6) | v3[2] & 0x3F;
          if ( (unsigned __int8)*v3 < 0xF0u )
          {
            v3 += 3;
            v15 = (v16 << 12) | v18;
          }
          else
          {
            v19 = v3[3];
            v3 += 4;
            v15 = ((v16 & 7) << 18) | (v18 << 6) | v19 & 0x3F;
          }
        }
      }
      if ( v15 != 34 )
        break;
      i ^= 1u;
      if ( v3 == (char *)v5 )
        goto LABEL_2;
    }
    if ( v15 == 46 )
    {
      if ( (i & 1) == 0 )
        break;
      i = 1;
      v20 = v31;
    }
    else
    {
      v20 = v31;
      if ( v15 >= 0x80 )
      {
        v22 = 4LL - (v15 < 0x10000);
        if ( v15 < 0x800 )
          v22 = 2;
        if ( v22 > v31 - v7 )
        {
          v34 = v7;
          sub_141939070((unsigned int)&v31, v7, v22, 1, 1);
          v7 = v34;
          v6 = v32;
        }
        v23 = v15 & 0x3F | 0x80;
        v24 = v15 >> 6;
        if ( v15 >= 0x800 )
        {
          v25 = v24 & 0x3F | 0x80;
          v26 = v15 >> 12;
          if ( v15 > 0xFFFF )
          {
            *(_BYTE *)(v6 + v7) = (v15 >> 18) | 0xF0;
            *(_BYTE *)(v6 + v7 + 1) = v26 & 0x3F | 0x80;
            *(_BYTE *)(v6 + v7 + 2) = v25;
            *(_BYTE *)(v6 + v7 + 3) = v23;
            v21 = 4;
          }
          else
          {
            *(_BYTE *)(v6 + v7) = v26 | 0xE0;
            *(_BYTE *)(v6 + v7 + 1) = v25;
            *(_BYTE *)(v6 + v7 + 2) = v23;
            v21 = 3;
          }
        }
        else
        {
          *(_BYTE *)(v6 + v7) = v24 | 0xC0;
          *(_BYTE *)(v6 + v7 + 1) = v23;
          v21 = 2;
        }
        goto LABEL_21;
      }
    }
    if ( v20 == v7 )
    {
      v34 = v7;
      sub_141939070((unsigned int)&v31, v7, 1, 1, 1);
      v7 = v34;
    }
    v6 = v32;
    *(_BYTE *)(v32 + v7) = v15;
    v21 = 1;
LABEL_21:
    v7 += v21;
  }
LABEL_2:
  v9 = v32;
  v10 = sub_1408FEA60(v32, v7);
  v13 = v11;
  if ( v11 < 0 )
  {
    v14 = 0;
    goto LABEL_4;
  }
  if ( v11 )
  {
    v27 = v10;
    nullsub_1(v12, v11);
    v14 = 1;
    v28 = sub_140001650(v13, 1);
    if ( !v28 )
LABEL_4:
      sub_14196B2DB(v14, v13);
    v29 = v28;
    result = sub_1419234B0(v28, v27, v13);
  }
  else
  {
    v29 = 1;
  }
  *a1 = v13;
  a1[1] = v29;
  a1[2] = v13;
  if ( v31 )
    return sub_140001660(v9, v31, 1);
  return result;
}
