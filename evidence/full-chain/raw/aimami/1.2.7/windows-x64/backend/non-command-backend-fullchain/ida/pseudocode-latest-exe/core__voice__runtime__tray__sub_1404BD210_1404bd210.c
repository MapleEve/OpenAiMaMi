// win 1.2.7 latest-exe | module src/core/voice/runtime/tray.rs | ea 0x1404bd210 | successor of pre-update 0x14047ccd0 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_CALLER"}
__int64 __fastcall sub_1404BD210(__int64 a1, char a2)
{
  __int64 result; // rax
  __m512i *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // eax
  float v12; // xmm0_4
  int v13; // ecx
  int v14; // esi
  int v15; // r9d
  unsigned __int64 v16; // r8
  __int64 v17; // r10
  __int64 v18; // r11
  int v19; // edx
  __int64 v20; // rbx
  __int64 v21; // r15
  __int64 v22; // r14
  int v23; // r12d
  int v24; // r12d
  int v25; // eax
  __int64 v26; // rcx
  bool v27; // zf
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  __int64 *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rcx
  _BYTE v38[152]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v39; // [rsp+C8h] [rbp+48h]
  __int64 v40; // [rsp+D0h] [rbp+50h]
  __int64 v41; // [rsp+E0h] [rbp+60h]
  __int64 v42; // [rsp+E8h] [rbp+68h]
  _QWORD *v43; // [rsp+F8h] [rbp+78h] BYREF
  _OWORD v44[3]; // [rsp+100h] [rbp+80h] BYREF
  __m512i v45; // [rsp+130h] [rbp+B0h] BYREF
  __int128 v46; // [rsp+170h] [rbp+F0h]
  __int64 v47; // [rsp+180h] [rbp+100h]
  __int128 v48; // [rsp+200h] [rbp+180h] BYREF
  __int64 v49; // [rsp+210h] [rbp+190h]
  int v50; // [rsp+218h] [rbp+198h]
  int v51; // [rsp+21Ch] [rbp+19Ch]
  __m512i v52; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v53; // [rsp+260h] [rbp+1E0h]
  __int64 v54; // [rsp+270h] [rbp+1F0h]
  __int64 v55; // [rsp+278h] [rbp+1F8h]
  __int64 v56; // [rsp+280h] [rbp+200h]
  char v57; // [rsp+28Fh] [rbp+20Fh]
  __int64 v58; // [rsp+290h] [rbp+210h]

  v58 = -2;
  result = sub_1404144F0((unsigned int)&v45, *(_DWORD *)(a1 + 136) + 4744, a1, (unsigned int)&unk_141A1F084, 4);
  if ( v45.m512i_i32[0] != -1 )
  {
    sub_1419234B0(v38, &v45, 208);
    *(_QWORD *)&v46 = &unk_141A1F088;
    *((_QWORD *)&v46 + 1) = 4612;
    v47 = 0;
    v45.m512i_i64[4] = -2;
    v45.m512i_i64[0] = 1;
    v45.m512i_i64[1] = 0x20000000;
    v45.m512i_i32[4] = 0;
    v45.m512i_i32[6] = 0;
    sub_140CEE6B0(&v52, &v45);
    if ( v52.m512i_i32[0] == 2 )
    {
      if ( (v52.m512i_i8[8] & 3u) - 2 >= 2 && (v52.m512i_i8[8] & 3) != 0 )
      {
LABEL_5:
        v45.m512i_i64[1] = v52.m512i_i64[1] - 1;
        v45.m512i_i8[0] = 3;
        sub_1416EBAD0(&v45.m512i_u64[1]);
      }
      goto LABEL_82;
    }
    v47 = v54;
    v46 = v53;
    v45 = v52;
    v4 = &v52;
    sub_140CEEC00(&v52, &v45);
    v5 = v52.m512i_i64[0];
    if ( v52.m512i_i64[0] == -1 )
    {
      v44[2] = *(_OWORD *)&v52.m512i_u64[5];
      v44[1] = *(_OWORD *)&v52.m512i_u64[3];
      v44[0] = *(_OWORD *)&v52.m512i_u64[1];
      sub_1410FF6F0(&v52, v44);
      v56 = v52.m512i_u32[6];
      v10 = v52.m512i_u32[7];
      if ( a2 )
      {
        v11 = v56;
        if ( v52.m512i_i32[7] < (unsigned int)v56 )
          v11 = v52.m512i_i32[7];
        v12 = roundf((float)v11 * 0.2);
        v13 = 0x7FFFFFFF;
        if ( v12 <= 2147483500.0 )
          v13 = (int)v12;
        if ( (_DWORD)v10 && (_DWORD)v56 )
        {
          v14 = v13 - v10 + 1;
          v15 = v13 * v13;
          v16 = v52.m512i_u64[2];
          v17 = v52.m512i_i64[1];
          v18 = 4 * v56;
          v19 = v13 - v56 + 1;
          v20 = 3;
          v21 = 0;
          v22 = 0;
          do
          {
            v23 = v21++;
            v24 = (v14 + v23) * (v14 + v23);
            v25 = v19;
            v26 = 0;
            do
            {
              if ( v24 + v25 * v25 <= v15 )
              {
                if ( v20 + v26 >= v16 )
                {
                  v57 = 1;
                  sub_14196B880(v26 - v22, v26 - v22 + 4, v16, &off_141A202B0);
                }
                *(_DWORD *)(v17 + v26) = -14276900;
              }
              v26 += 4;
              ++v25;
            }
            while ( v18 != v26 );
            v22 -= v18;
            v17 += v18;
            v20 += v18;
          }
          while ( v21 != v10 );
        }
      }
      v49 = v52.m512i_i64[2];
      v48 = *(_OWORD *)v52.m512i_i8;
      v50 = v56;
      v51 = v10;
      v57 = 0;
      sub_1406312E0(&v45, v38, &v48);
      if ( v45.m512i_i64[0] != -1 )
      {
        v57 = 0;
        sub_1404292E0(&v45);
      }
      sub_14042B280(v44);
      if ( v39 )
        sub_140001660(v40, v39, 1);
      if ( v41 )
        sub_140001660(v42, v41, 1);
      v27 = (*v43)-- == 1;
      if ( !v27 )
        return sub_140031300(v38);
LABEL_87:
      sub_140631DB0(&v43);
      return sub_140031300(v38);
    }
    v6 = 4;
    if ( v52.m512i_i64[0] > 0x8000000000000003uLL )
      v6 = v52.m512i_i64[0] + 0x7FFFFFFFFFFFFFFCLL;
    switch ( v6 )
    {
      case 0LL:
        v7 = v52.m512i_i64[1];
        v8 = 2;
        if ( v52.m512i_i64[1] < 0 )
          v8 = v52.m512i_i64[1] ^ 0x8000000000000000uLL;
        if ( v8 == 1 )
        {
          v9 = 2;
          v7 = v52.m512i_i64[2];
        }
        else
        {
          v9 = 1;
          if ( v8 != 2 )
            goto LABEL_76;
        }
        if ( v7 )
          sub_140001660(v52.m512i_i64[v9 + 1], v7, 1);
LABEL_76:
        v56 = v52.m512i_i64[5];
        if ( v52.m512i_i64[5] )
        {
          v55 = v52.m512i_i64[6];
          if ( !*(_QWORD *)v52.m512i_i64[6] )
            goto LABEL_79;
          goto LABEL_78;
        }
        goto LABEL_82;
      case 1LL:
        v29 = v52.m512i_i64[1];
        v30 = 2;
        if ( v52.m512i_i64[1] < 0 )
          v30 = v52.m512i_i64[1] ^ 0x8000000000000000uLL;
        if ( v30 == 1 )
        {
          v31 = 2;
          v29 = v52.m512i_i64[2];
        }
        else
        {
          v31 = 1;
          if ( v30 != 2 )
            goto LABEL_70;
        }
        if ( v29 )
          sub_140001660(v52.m512i_i64[v31 + 1], v29, 1);
LABEL_70:
        v56 = v52.m512i_i64[5];
        if ( v52.m512i_i64[5] )
        {
          v55 = v52.m512i_i64[6];
          if ( *(_QWORD *)v52.m512i_i64[6] )
LABEL_78:
            (*(void (__fastcall **)(__int64))v52.m512i_i64[6])(v56);
          goto LABEL_79;
        }
        goto LABEL_82;
      case 2LL:
        if ( v52.m512i_i64[1] > 0 )
          sub_140001660(v52.m512i_i64[2], v52.m512i_i64[1], 1);
        v56 = v52.m512i_i64[4];
        if ( v52.m512i_i64[4] )
        {
          v55 = v52.m512i_i64[5];
          if ( *(_QWORD *)v52.m512i_i64[5] )
            (*(void (__fastcall **)(__int64))v52.m512i_i64[5])(v56);
LABEL_79:
          v35 = *(_QWORD *)(v55 + 8);
          if ( v35 )
          {
            v36 = *(_QWORD *)(v55 + 16);
            v37 = v56;
            goto LABEL_81;
          }
        }
        goto LABEL_82;
      case 3LL:
        goto LABEL_82;
      case 4LL:
        v28 = 2;
        if ( v52.m512i_i64[0] < 0 )
          v28 = v52.m512i_i64[0] ^ 0x8000000000000000uLL;
        if ( v28 == 1 )
        {
          v5 = v52.m512i_i64[1];
          v4 = (__m512i *)&v52.m512i_u64[1];
        }
        else if ( v28 != 2 )
        {
          goto LABEL_58;
        }
        if ( v5 )
          sub_140001660(v4->m512i_i64[1], v5, 1);
LABEL_58:
        v32 = 3;
        if ( v52.m512i_i64[4] > 0x8000000000000003uLL )
          v32 = v52.m512i_i64[4] + 0x7FFFFFFFFFFFFFFCLL;
        if ( v32 < 3 )
          goto LABEL_82;
        if ( v32 == 3 )
        {
          v33 = 2;
          if ( v52.m512i_i64[4] < 0 )
            v33 = v52.m512i_i64[4] ^ 0x8000000000000000uLL;
          if ( v33 == 2 )
          {
            v34 = &v52.m512i_i64[4];
LABEL_92:
            v35 = *v34;
            if ( *v34 )
            {
              v37 = v34[1];
              v36 = 1;
LABEL_81:
              sub_140001660(v37, v35, v36);
            }
LABEL_82:
            if ( v39 )
              sub_140001660(v40, v39, 1);
            if ( v41 )
              sub_140001660(v42, v41, 1);
            v27 = (*v43)-- == 1;
            if ( !v27 )
              return sub_140031300(v38);
            goto LABEL_87;
          }
          if ( v33 != 1 )
            goto LABEL_82;
        }
        v34 = &v52.m512i_i64[5];
        goto LABEL_92;
      default:
        if ( (v52.m512i_i8[8] & 3u) - 2 >= 2 && (v52.m512i_i8[8] & 3) != 0 )
          goto LABEL_5;
        goto LABEL_82;
    }
  }
  return result;
}
