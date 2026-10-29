// win 1.2.7 | module src/core/repository.rs | ea 0x14020e290 | name sub_14020E290
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_14020E290(__int64 *a1, char a2, unsigned __int8 a3, __int64 a4)
{
  __int64 v7; // r8
  const char *v8; // rdx
  int v9; // edx
  int v10; // ecx
  unsigned int v11; // ecx
  __int64 v12; // r15
  char result; // al
  char v14; // r14
  __int64 v15; // r13
  int v16; // edx
  int v17; // ecx
  unsigned int v18; // ecx
  signed __int64 v19; // rax
  __int64 v20; // rcx
  __int64 *v21; // r15
  int v22; // eax
  bool v23; // zf
  __int64 v24; // rdx
  char v25; // r14
  __int64 v26; // [rsp+20h] [rbp-30h]
  __int128 v27; // [rsp+28h] [rbp-28h] BYREF
  __int64 v28; // [rsp+38h] [rbp-18h]
  int v29; // [rsp+44h] [rbp-Ch] BYREF
  unsigned int v30; // [rsp+48h] [rbp-8h]
  unsigned int v31; // [rsp+4Ch] [rbp-4h]
  __int64 v32; // [rsp+50h] [rbp+0h]

  v32 = -2;
  v7 = 4;
  switch ( a2 )
  {
    case 0:
      v8 = (const char *)&unk_1419DC163;
      goto LABEL_10;
    case 1:
      v8 = (const char *)&unk_1419DC167;
      goto LABEL_10;
    case 2:
      v8 = a5xPro;
      v7 = 6;
      goto LABEL_10;
    case 3:
      v8 = a20xPro;
      v7 = 7;
      goto LABEL_10;
    case 4:
      v8 = (const char *)&unk_1419DC178;
      goto LABEL_10;
    case 5:
      v8 = aBusiness;
      v7 = 8;
      goto LABEL_10;
    case 6:
      v8 = aEnterprise;
      v7 = 10;
      goto LABEL_10;
    case 7:
      v8 = (const char *)&unk_1419DC18E;
      v7 = 3;
LABEL_10:
      sub_1416AA4F0(&v27, v8, v7);
      sub_141406CE0(&v29);
      v9 = (v29 >> 13) - 1;
      v10 = 0;
      if ( v29 >> 13 <= 0 )
      {
        v11 = (1 - (v29 >> 13)) / 0x190u + 1;
        v9 += 400 * v11;
        v10 = -146097 * v11;
      }
      v12 = 1000 * a4;
      if ( (unsigned __int64)(a4 - 1) >= 0x2540BE3FFLL )
        v12 = a4;
      if ( v12 <= (__int64)(v31 / 0xF4240uLL
                          + 1000
                          * (v30
                           + 86400LL
                           * (int)(((v9 / 100) >> 2)
                                 + ((1461 * v9) >> 2)
                                 + v10
                                 + (((unsigned int)v29 >> 4) & 0x1FF)
                                 - v9 / 100
                                 - 719163))
                          + 1000) )
      {
        v14 = *((_BYTE *)a1 + 418);
        if ( a3 >= (unsigned __int8)(v14 + 1) )
          goto LABEL_28;
        if ( a3 == v14 )
        {
          v26 = *a1;
          v15 = a1[1];
          sub_141406CE0(&v29);
          v16 = (v29 >> 13) - 1;
          v17 = 0;
          if ( v29 >> 13 <= 0 )
          {
            v18 = (1 - (v29 >> 13)) / 0x190u + 1;
            v16 += 400 * v18;
            v17 = -146097 * v18;
          }
          v19 = v31 / 0xF4240uLL
              + 1000
              * (v30
               + 86400LL
               * (int)(((v16 / 100) >> 2)
                     + ((1461 * v16) >> 2)
                     + v17
                     + (((unsigned int)v29 >> 4) & 0x1FF)
                     - v16 / 100
                     - 719163))
              + 1000;
          if ( v12 <= v19 )
          {
            if ( !v26 )
              goto LABEL_28;
            v20 = 1000 * v15;
            if ( (unsigned __int64)(v15 - 1) >= 0x2540BE3FFLL )
              v20 = v15;
            if ( v12 > v20 || v20 > v19 )
            {
LABEL_28:
              v21 = a1 + 36;
              result = 1;
              if ( a1[38] == v28 )
              {
                v22 = sub_1418F4B70(a1[37], *((_QWORD *)&v27 + 1));
                if ( v14 != a3 )
                {
                  result = 1;
                  v24 = *v21;
                  if ( !*v21 )
                    goto LABEL_34;
                  goto LABEL_33;
                }
                v23 = v22 == 0;
                result = 1;
                if ( v23 )
                  result = (a1[1] != a4) | *(_BYTE *)a1 ^ 1;
              }
              v24 = *v21;
              if ( !*v21 )
              {
LABEL_34:
                a1[38] = v28;
                *(_OWORD *)v21 = v27;
                *((_BYTE *)a1 + 418) = a3;
                *a1 = 1;
                a1[1] = a4;
                return result;
              }
LABEL_33:
              v25 = result;
              sub_140001660(a1[37], v24, 1);
              result = v25;
              goto LABEL_34;
            }
          }
        }
      }
      if ( (_QWORD)v27 )
        sub_140001660(*((_QWORD *)&v27 + 1), v27, 1);
      return 0;
    case 8:
      return 0;
  }
}
