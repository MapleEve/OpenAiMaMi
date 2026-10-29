// win 1.2.7 | module src/platform/proxy.rs | ea 0x14100a360 | name sub_14100A360
// win 1.2.7 | module src/platform/proxy.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_14100A360(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  signed __int64 v7; // rdx
  signed __int64 v8; // rdi
  const __m128i *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rdi
  __m128i *v13; // rax
  __m128i *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD v17[4]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v19[2]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v20; // [rsp+68h] [rbp-18h] BYREF
  signed __int64 v21; // [rsp+78h] [rbp-8h]
  __int64 v22; // [rsp+80h] [rbp+0h]

  v22 = -2;
  v19[0] = a2;
  v19[1] = a3;
  if ( a4 )
  {
    v6 = sub_140E91160(a4, a5);
    if ( v6 )
    {
      v8 = v7;
      if ( v7 )
      {
        v18[0] = v6;
        v18[1] = v7;
        v9 = (const __m128i *)v6;
        if ( (unsigned __int8)sub_141059410(asc_141A6F0A2, 3, v6, v7) )
        {
          if ( v8 < 0 )
          {
            v11 = 0;
            goto LABEL_7;
          }
          nullsub_1(v10);
          v11 = 1;
          v13 = (__m128i *)sub_140001650(v8, 1);
          if ( !v13 )
LABEL_7:
            sub_141938D2B(v11, v8);
          v14 = v13;
          sub_1418F44E0(v13, v9, v8);
          *(_QWORD *)&v20 = v8;
          *((_QWORD *)&v20 + 1) = v14;
          v21 = v8;
          v12 = a1[2];
          if ( v12 != *a1 )
            goto LABEL_13;
        }
        else
        {
          v17[0] = v19;
          v17[1] = sub_140186EE0;
          v17[2] = v18;
          v17[3] = sub_140186EE0;
          sub_1416ABFD0(&v20, &unk_141A6F0A5, v17);
          v12 = a1[2];
          if ( v12 != *a1 )
            goto LABEL_13;
        }
        sub_14190FDC0(a1);
LABEL_13:
        v15 = a1[1];
        v16 = 3 * v12;
        *(_QWORD *)(v15 + 8 * v16 + 16) = v21;
        *(_OWORD *)(v15 + 8 * v16) = v20;
        a1[2] = v12 + 1;
      }
    }
  }
}
