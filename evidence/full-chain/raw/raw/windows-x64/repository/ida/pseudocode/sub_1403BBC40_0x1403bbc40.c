// module: codexmate_lib/core/repository
// addr: 0x1403bbc40
// name: sub_1403BBC40
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1403BBC40(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rdx
  unsigned __int8 v7; // bp
  __int64 v8; // r15
  __int64 v9; // rax
  int v10; // edx
  int v11; // ecx
  unsigned int v12; // ecx
  char v13; // al
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  char v18; // al
  __int64 v19; // rax
  char v20; // al
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // xmm0_8
  int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // xmm0_8
  int v31; // ecx
  __int64 v32; // rdx
  _BYTE v33[24]; // [rsp+28h] [rbp-60h] BYREF
  __int128 v34; // [rsp+40h] [rbp-48h]

  if ( a2 )
  {
    v4 = *(_DWORD **)(a2 + 296);
    v5 = *(_QWORD *)(a2 + 304);
    sub_14033BC10(v4, v5);
    if ( !v6 || v5 == 7 && !(*v4 ^ 0x6E6B6E75 | *(_DWORD *)((char *)v4 + 3) ^ 0x6E776F6E) )
    {
LABEL_17:
      if ( !*(_QWORD *)(a1 + 280) && *(_QWORD *)(a2 + 280) )
      {
        sub_14149C500(v33, a2 + 264);
        if ( *(_QWORD *)(a1 + 264) )
          sub_140001660(*(_QWORD *)(a1 + 272), *(_QWORD *)(a1 + 264), 1);
        *(_QWORD *)(a1 + 280) = *(_QWORD *)&v33[16];
        *(_OWORD *)(a1 + 264) = *(_OWORD *)v33;
      }
      if ( *(_QWORD *)(a1 + 336) == -1 )
      {
        if ( *(_QWORD *)(a2 + 336) == -1 )
        {
          v15 = -1;
        }
        else
        {
          sub_14149C500(v33, a2 + 336);
          v15 = *(_QWORD *)v33;
          v34 = *(_OWORD *)&v33[8];
        }
        *(_QWORD *)(a1 + 336) = v15;
        *(_OWORD *)(a1 + 344) = v34;
        if ( *(_QWORD *)(a1 + 360) != -1 )
        {
LABEL_24:
          if ( *(_QWORD *)(a1 + 384) != -1 )
            goto LABEL_25;
          goto LABEL_35;
        }
      }
      else if ( *(_QWORD *)(a1 + 360) != -1 )
      {
        goto LABEL_24;
      }
      if ( *(_QWORD *)(a2 + 360) == -1 )
      {
        v16 = -1;
      }
      else
      {
        sub_14149C500(v33, a2 + 360);
        v16 = *(_QWORD *)v33;
        v34 = *(_OWORD *)&v33[8];
      }
      *(_QWORD *)(a1 + 360) = v16;
      *(_OWORD *)(a1 + 368) = v34;
      if ( *(_QWORD *)(a1 + 384) != -1 )
      {
LABEL_25:
        if ( *(_QWORD *)(a2 + 64) )
        {
LABEL_26:
          *(_BYTE *)(a1 + 416) = *(_BYTE *)(a2 + 416);
          *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
          *(_BYTE *)(a1 + 417) = *(_BYTE *)(a2 + 417);
          *(_BYTE *)(a1 + 419) = *(_BYTE *)(a2 + 419);
          v14 = *(_QWORD *)(a2 + 72);
          *(_QWORD *)(a1 + 64) = 1;
          *(_QWORD *)(a1 + 72) = v14;
          goto LABEL_45;
        }
LABEL_39:
        v18 = *(_BYTE *)(a2 + 416);
        if ( v18 != 2 )
          *(_BYTE *)(a1 + 416) = v18;
        if ( *(_QWORD *)(a2 + 16) )
        {
          v19 = *(_QWORD *)(a2 + 24);
          *(_QWORD *)(a1 + 16) = 1;
          *(_QWORD *)(a1 + 24) = v19;
        }
        v20 = *(_BYTE *)(a2 + 417);
        if ( v20 != 2 )
          *(_BYTE *)(a1 + 417) = v20;
LABEL_45:
        if ( *(_QWORD *)(a2 + 32) )
        {
          v21 = *(_QWORD *)(a2 + 40);
          *(_QWORD *)(a1 + 32) = 1;
          *(_QWORD *)(a1 + 40) = v21;
        }
        if ( *(_QWORD *)(a2 + 48) )
        {
          v22 = *(_QWORD *)(a2 + 56);
          *(_QWORD *)(a1 + 48) = 1;
          *(_QWORD *)(a1 + 56) = v22;
        }
        if ( *(_DWORD *)(a2 + 80) == 1 )
        {
          v28 = *(_QWORD *)(a1 + 88);
          if ( *(_QWORD *)(a2 + 88) > v28 )
            v28 = *(_QWORD *)(a2 + 88);
          if ( !*(_BYTE *)(a1 + 80) )
            v28 = *(_QWORD *)(a2 + 88);
          *(_QWORD *)(a1 + 80) = 1;
          *(_QWORD *)(a1 + 88) = v28;
          if ( *(_DWORD *)(a2 + 96) != 1 )
          {
LABEL_51:
            v23 = *(_QWORD *)(a2 + 112);
            if ( v23 == 2 )
              goto LABEL_52;
            goto LABEL_65;
          }
        }
        else if ( *(_DWORD *)(a2 + 96) != 1 )
        {
          goto LABEL_51;
        }
        v29 = *(_QWORD *)(a1 + 104);
        if ( *(_QWORD *)(a2 + 104) > v29 )
          v29 = *(_QWORD *)(a2 + 104);
        if ( !*(_BYTE *)(a1 + 96) )
          v29 = *(_QWORD *)(a2 + 104);
        *(_QWORD *)(a1 + 96) = 1;
        *(_QWORD *)(a1 + 104) = v29;
        v23 = *(_QWORD *)(a2 + 112);
        if ( v23 == 2 )
        {
LABEL_52:
          v24 = *(_QWORD *)(a2 + 152);
          if ( v24 == 2 )
            return;
          goto LABEL_53;
        }
LABEL_65:
        v30 = *(_QWORD *)(a2 + 136);
        v31 = *(_DWORD *)(a2 + 144);
        v32 = *(_QWORD *)(a2 + 120);
        *(_QWORD *)(a1 + 112) = v23;
        *(_QWORD *)(a1 + 120) = v32;
        *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 128);
        *(_QWORD *)(a1 + 136) = v30;
        *(_DWORD *)(a1 + 144) = v31;
        v24 = *(_QWORD *)(a2 + 152);
        if ( v24 == 2 )
          return;
LABEL_53:
        v25 = *(_QWORD *)(a2 + 176);
        v26 = *(_DWORD *)(a2 + 184);
        v27 = *(_QWORD *)(a2 + 160);
        *(_QWORD *)(a1 + 152) = v24;
        *(_QWORD *)(a1 + 160) = v27;
        *(_QWORD *)(a1 + 168) = *(_QWORD *)(a2 + 168);
        *(_QWORD *)(a1 + 176) = v25;
        *(_DWORD *)(a1 + 184) = v26;
        return;
      }
LABEL_35:
      if ( *(_QWORD *)(a2 + 384) == -1 )
      {
        v17 = -1;
      }
      else
      {
        sub_14149C500(v33, a2 + 384);
        v17 = *(_QWORD *)v33;
        v34 = *(_OWORD *)&v33[8];
      }
      *(_QWORD *)(a1 + 384) = v17;
      *(_OWORD *)(a1 + 392) = v34;
      if ( *(_QWORD *)(a2 + 64) )
        goto LABEL_26;
      goto LABEL_39;
    }
    v7 = *(_BYTE *)(a2 + 418);
    if ( v7 == 0xFF )
    {
      v7 = 2 * *(_BYTE *)(a2 + 96);
      if ( *(_BYTE *)a2 )
        goto LABEL_7;
    }
    else if ( *(_BYTE *)a2 )
    {
LABEL_7:
      v8 = *(_QWORD *)(a2 + 8);
LABEL_16:
      v13 = sub_1409DA470(v4, v5);
      sub_1403B9650((__int64 *)a1, v13, v7, v8);
      goto LABEL_17;
    }
    if ( *(_QWORD *)(a2 + 96) == 1 )
    {
      v9 = *(_QWORD *)(a2 + 104);
      v8 = 1000 * v9;
      if ( (unsigned __int64)(v9 - 1) >= 0x2540BE3FFLL )
        v8 = *(_QWORD *)(a2 + 104);
    }
    else
    {
      sub_140FFA6E0(v33);
      v10 = (*(int *)v33 >> 13) - 1;
      v11 = 0;
      if ( *(int *)v33 >> 13 <= 0 )
      {
        v12 = (1 - (*(int *)v33 >> 13)) / 0x190u + 1;
        v10 += 400 * v12;
        v11 = -146097 * v12;
      }
      v8 = 1000
         * (*(unsigned int *)&v33[4]
          + 86400LL
          * (((v10 / 100) >> 2) + ((1461 * v10) >> 2) + v11 + ((*(_DWORD *)v33 >> 4) & 0x1FF) - v10 / 100 - 719163))
         + *(unsigned int *)&v33[8] / 0xF4240uLL;
    }
    goto LABEL_16;
  }
}