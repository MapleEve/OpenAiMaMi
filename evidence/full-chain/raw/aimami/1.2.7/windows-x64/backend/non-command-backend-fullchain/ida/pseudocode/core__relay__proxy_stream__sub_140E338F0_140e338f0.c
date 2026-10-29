// win 1.2.7 | module src/core/relay/proxy_stream.rs | ea 0x140e338f0 | name sub_140E338F0
// win 1.2.7 | module src/core/relay/proxy_stream.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_140E338F0(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 v12; // r14
  int v13; // eax
  char v14; // cl
  char v15; // r8
  char v16; // r9
  __int64 v17; // r14
  int v18; // r8d
  int v19; // ecx
  __int128 v20; // rax
  __int64 v21; // rdx
  __int128 v22; // [rsp+20h] [rbp-60h] BYREF
  __int64 v23; // [rsp+30h] [rbp-50h]
  __int64 v24; // [rsp+38h] [rbp-48h] BYREF
  __int64 v25; // [rsp+40h] [rbp-40h]
  __int64 v26; // [rsp+48h] [rbp-38h]
  __int128 v27; // [rsp+50h] [rbp-30h] BYREF
  __int128 v28; // [rsp+60h] [rbp-20h]
  __int128 v29; // [rsp+78h] [rbp-8h] BYREF
  __int128 v30; // [rsp+88h] [rbp+8h]
  __int64 v31; // [rsp+98h] [rbp+18h]
  __int128 v32; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v33; // [rsp+B0h] [rbp+30h]
  __int128 v34; // [rsp+C0h] [rbp+40h]
  __int64 v35; // [rsp+D0h] [rbp+50h]
  __int64 v36; // [rsp+D8h] [rbp+58h]

  v36 = -2;
  if ( *(_BYTE *)(a2 + 477) )
  {
LABEL_2:
    *a1 = 0;
    a1[1] = 1;
    a1[2] = 0;
    return a1;
  }
  v6 = a4;
  v9 = sub_140E91160(a3, a4);
  if ( v10 != 12 || *(_QWORD *)v9 ^ 0x65203A746E657665LL | *(unsigned int *)(v9 + 8) ^ 0x726F7272LL )
  {
    while ( v6 )
    {
      v11 = v6;
      v12 = a3 + v6;
      v13 = *(char *)(v12 - 1);
      if ( v13 >= 0 )
      {
        v6 = v12 - 1 - a3;
        if ( v13 != 13 )
          goto LABEL_19;
      }
      else
      {
        v14 = *(_BYTE *)(v12 - 2);
        if ( v14 >= -64 )
        {
          v17 = v12 - 2;
          v19 = v14 & 0x1F;
        }
        else
        {
          v15 = *(_BYTE *)(v12 - 3);
          if ( v15 >= -64 )
          {
            v17 = v12 - 3;
            v18 = v15 & 0xF;
          }
          else
          {
            v16 = *(_BYTE *)(v12 - 4);
            v17 = v12 - 4;
            v18 = ((v16 & 7) << 6) | v15 & 0x3F;
          }
          v19 = (v18 << 6) | v14 & 0x3F;
        }
        v6 = v17 - a3;
        if ( ((v19 << 6) | v13 & 0x3F) != 0xD )
        {
LABEL_19:
          if ( v11 < 5 )
            goto LABEL_2;
          if ( *(_DWORD *)a3 ^ 0x61746164 | *(unsigned __int8 *)(a3 + 4) ^ 0x3A )
            goto LABEL_2;
          *(_QWORD *)&v20 = sub_140E91B30(a3 + 5, v11 - 5);
          if ( !*((_QWORD *)&v20 + 1) || !(_QWORD)v20 )
            goto LABEL_2;
          if ( *((_QWORD *)&v20 + 1) == 6 && !(*(_DWORD *)v20 ^ 0x4E4F445B | *(unsigned __int16 *)(v20 + 4) ^ 0x5D45) )
          {
            if ( *(_QWORD *)(a2 + 296) == -1 )
              v21 = 0;
            else
              v21 = *(_QWORD *)(a2 + 304);
            sub_140163AC0(&v32, v21, *(_QWORD *)(a2 + 312));
            sub_140E25810(a1, a2, &v32);
          }
          else
          {
            v32 = v20;
            v33 = 0;
            v34 = v20;
            sub_14062D280(&v29, &v32);
            if ( (_BYTE)v29 == 0xFF )
            {
              sub_14102D650(&v24, aInvalidJsonInC, 29);
              v35 = v25;
              *(_QWORD *)&v32 = v25;
              *((_QWORD *)&v32 + 1) = v25 + v26;
              *(_QWORD *)&v33 = 512;
              sub_1407171D0(&v22, &v32);
              *((_QWORD *)&v33 + 1) = aUpstreamProtoc;
              *(_QWORD *)&v34 = 23;
              v32 = v22;
              *(_QWORD *)&v33 = v23;
              if ( v24 )
                sub_140001660(v35, v24, 1);
              sub_140E25810(a1, a2, &v32);
              sub_14002F910((char *)&v29 + 8);
            }
            else
            {
              v28 = v30;
              v27 = v29;
              sub_140163D60(&v29, &v27);
              if ( (_QWORD)v29 == -1 )
              {
                sub_140E20070(a1, a2, &v27);
              }
              else
              {
                *(_QWORD *)&v34 = v31;
                v33 = v30;
                v32 = v29;
                sub_140E25810(a1, a2, &v32);
              }
              sub_140DF44E0(&v27);
            }
          }
          return a1;
        }
      }
    }
    goto LABEL_2;
  }
  sub_14102D650(&v29, aUpstreamChatEm, 36);
  v35 = *((_QWORD *)&v29 + 1);
  *(_QWORD *)&v32 = *((_QWORD *)&v29 + 1);
  *((_QWORD *)&v32 + 1) = *((_QWORD *)&v29 + 1) + v30;
  *(_QWORD *)&v33 = 512;
  sub_1407171D0(&v27, &v32);
  *((_QWORD *)&v33 + 1) = aUpstreamError_0;
  *(_QWORD *)&v34 = 14;
  v32 = v27;
  *(_QWORD *)&v33 = v28;
  if ( (_QWORD)v29 )
    sub_140001660(v35, v29, 1);
  sub_140E25810(a1, a2, &v32);
  return a1;
}
