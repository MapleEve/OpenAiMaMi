// __ZN13codexmate_lib4core5relay10translator32collect_tool_search_output_tools @ 0x10080dae0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::translator::collect_tool_search_output_tools::hbeb7fc2373e9ba8d(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // r13
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // r12
  __int64 v9; // r14
  size_t v10; // rdx
  size_t v11; // rbx
  __int64 v12; // rbx
  int v13; // eax
  char v14; // cl
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rbx
  __m128i v18; // xmm1
  __int64 v19; // r14
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rbx
  __int64 v22; // rsi
  unsigned __int64 v23; // rdi
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // [rsp+8h] [rbp-68h]
  __int64 v31; // [rsp+10h] [rbp-60h]
  __int64 v32; // [rsp+18h] [rbp-58h]
  __int64 v33; // [rsp+20h] [rbp-50h]
  unsigned __int64 v34; // [rsp+38h] [rbp-38h]

  result = *(unsigned __int8 *)a1; /*0x10080daf5*/
  if ( (_DWORD)result == 4 ) /*0x10080dafb*/
  {
    v15 = a1[3]; /*0x10080dbf7*/
    if ( v15 ) /*0x10080dc02*/
    {
      v16 = a1[2]; /*0x10080dc08*/
      v17 = 32 * v15; /*0x10080dc0c*/
      do /*0x10080dc23*/
      {
        result = codexmate_lib::core::relay::translator::collect_tool_search_output_tools::hbeb7fc2373e9ba8d(v16, a2); /*0x10080dc17*/
        v16 += 32; /*0x10080dc1c*/
        v17 -= 32; /*0x10080dc1f*/
      }
      while ( v17 ); /*0x10080dc23*/
    }
  }
  else if ( (_DWORD)result == 5 ) /*0x10080db04*/
  {
    v3 = a1[1]; /*0x10080db0a*/
    if ( v3 ) /*0x10080db11*/
    {
      v4 = a1[2]; /*0x10080db23*/
      v34 = v4; /*0x10080db27*/
      v5 = a1[1]; /*0x10080db2b*/
LABEL_5:
      v6 = v5 + 360; /*0x10080db2e*/
      v32 = v5; /*0x10080db3c*/
      v7 = (_QWORD *)(v5 - 8); /*0x10080db40*/
      v33 = *(unsigned __int16 *)(v5 + 626); /*0x10080db44*/
      v8 = 3LL * (unsigned int)(8 * v33); /*0x10080db4f*/
      v9 = -1; /*0x10080db53*/
      do /*0x10080dbc1*/
      {
        if ( !v8 ) /*0x10080db63*/
        {
          v9 = v33; /*0x10080dbd0*/
LABEL_15:
          if ( !v34 ) /*0x10080dbdc*/
            goto LABEL_24; /*0x10080dbdc*/
          --v34; /*0x10080dbe2*/
          v5 = *(_QWORD *)(v32 + 8 * v9 + 632); /*0x10080dbea*/
          goto LABEL_5; /*0x10080dbf2*/
        }
        v31 = v6 + 24; /*0x10080db69*/
        v30 = v7; /*0x10080db71*/
        v10 = *(_QWORD *)(v6 + 16); /*0x10080db75*/
        v11 = v10 - 4; /*0x10080db7c*/
        if ( v10 >= 4 ) /*0x10080db85*/
          v10 = 4; /*0x10080db85*/
        v12 = -(__int64)v11; /*0x10080db89*/
        v13 = memcmp(&anon_22327b6004f579c0722d6ebc68f79196_45, *(const void **)(v6 + 8), v10); /*0x10080db93*/
        if ( v13 ) /*0x10080dba0*/
          v12 = v13; /*0x10080dba0*/
        v14 = (v12 > 0) - (v12 < 0); /*0x10080dbad*/
        v7 = v30 + 4; /*0x10080dbaf*/
        ++v9; /*0x10080dbb3*/
        v8 -= 24; /*0x10080dbb6*/
        v6 = v31; /*0x10080dbba*/
      }
      while ( v14 == 1 ); /*0x10080dbc1*/
      if ( v14 ) /*0x10080dbc8*/
        goto LABEL_15; /*0x10080dbc8*/
      if ( *((_BYTE *)v30 + 8) == 3 && *v7 == 18 ) /*0x10080dc34*/
      {
        v18 = _mm_or_si128( /*0x10080dc56*/
                _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(v30[3] + 16LL)), (__m128i)xmmword_10167AD70),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)v30[3]), (__m128i)xmmword_10167AD60));
        if ( _mm_testz_si128(v18, v18) ) /*0x10080dc5f*/
        {
          v29 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hecba87f1181f86d0( /*0x10080de78*/
                  a1 + 1,
                  &unk_10167B7AA,
                  5);
          if ( v29 ) /*0x10080de80*/
          {
            if ( *(_BYTE *)v29 == 4 ) /*0x10080de89*/
              alloc::vec::Vec$LT$T$C$A$GT$::extend_trusted::hf9ec2be47f39d048( /*0x10080dea2*/
                a2,
                *(_QWORD *)(v29 + 16),
                *(_QWORD *)(v29 + 16) + 32LL * *(_QWORD *)(v29 + 24));
          }
        }
      }
LABEL_24:
      result = (__int64)a1; /*0x10080dc65*/
      v19 = a1[3]; /*0x10080dc69*/
      if ( v19 ) /*0x10080dc70*/
      {
        v20 = 0; /*0x10080dc76*/
        while ( 1 ) /*0x10080dcac*/
        {
          if ( v20 ) /*0x10080dcaf*/
          {
            if ( v4 < *(unsigned __int16 *)(v20 + 626) ) /*0x10080dcbd*/
              goto LABEL_31; /*0x10080dcbd*/
            goto LABEL_42; /*0x10080dcbd*/
          }
          if ( !v4 ) /*0x10080dcd3*/
          {
            v20 = v3; /*0x10080dd0e*/
            goto LABEL_41; /*0x10080dd11*/
          }
          v20 = v3; /*0x10080dcd8*/
          if ( (v4 & 7) == 0 ) /*0x10080dcdf*/
            break; /*0x10080dcdf*/
          v24 = 0; /*0x10080dce1*/
          do /*0x10080dcfe*/
          {
            v20 = *(_QWORD *)(v20 + 632); /*0x10080dcf0*/
            ++v24; /*0x10080dcf8*/
          }
          while ( (v4 & 7) != v24 ); /*0x10080dcfe*/
          v25 = v4 - v24; /*0x10080dd03*/
          if ( v4 >= 8 ) /*0x10080dd0a*/
            goto LABEL_40; /*0x10080dd0a*/
LABEL_41:
          v4 = 0; /*0x10080dd5f*/
          v3 = 0; /*0x10080dd62*/
          if ( *(_WORD *)(v20 + 626) ) /*0x10080dd65*/
          {
LABEL_31:
            v23 = v20; /*0x10080dcc3*/
            goto LABEL_44; /*0x10080dcc6*/
          }
          do /*0x10080dda8*/
          {
LABEL_42:
            v23 = *(_QWORD *)(v20 + 352); /*0x10080dd80*/
            if ( !v23 ) /*0x10080dd8b*/
              core::option::unwrap_failed::h44626cade04bbf1e(&anon_0c22962ad8183617843af04262484590_853); /*0x10080deb3*/
            ++v3; /*0x10080dd91*/
            v4 = *(unsigned __int16 *)(v20 + 624); /*0x10080dd94*/
            v20 = *(_QWORD *)(v20 + 352); /*0x10080dd9d*/
          }
          while ( (unsigned __int16)v4 >= *(_WORD *)(v23 + 626) ); /*0x10080dda8*/
LABEL_44:
          if ( v3 ) /*0x10080ddad*/
          {
            v26 = v23 + 8 * v4 + 640; /*0x10080ddb3*/
            if ( (v3 & 7) != 0 ) /*0x10080ddc2*/
            {
              v27 = 0; /*0x10080ddc4*/
              do /*0x10080dde1*/
              {
                v20 = *(_QWORD *)v26; /*0x10080ddd0*/
                v26 = *(_QWORD *)v26 + 632LL; /*0x10080ddd3*/
                ++v27; /*0x10080dddb*/
              }
              while ( (v3 & 7) != v27 ); /*0x10080dde1*/
              v28 = v3 - v27; /*0x10080dde6*/
              if ( v3 >= 8 ) /*0x10080dded*/
              {
LABEL_51:
                v22 = a2; /*0x10080de09*/
                do /*0x10080de50*/
                {
                  v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v26 + 632LL) /*0x10080de3d*/
                                                                                              + 632LL)
                                                                                  + 632LL)
                                                                      + 632LL)
                                                          + 632LL)
                                              + 632LL)
                                  + 632LL);
                  v26 = v20 + 632; /*0x10080de44*/
                  v28 -= 8LL; /*0x10080de4c*/
                }
                while ( v28 ); /*0x10080de50*/
                v21 = 0; /*0x10080de52*/
                goto LABEL_28; /*0x10080de54*/
              }
            }
            else
            {
              v28 = v3; /*0x10080de00*/
              if ( v3 >= 8 ) /*0x10080de07*/
                goto LABEL_51; /*0x10080de07*/
            }
            v21 = 0; /*0x10080ddef*/
          }
          else
          {
            v21 = v4 + 1; /*0x10080dc80*/
            v20 = v23; /*0x10080dc84*/
          }
          v22 = a2; /*0x10080dc87*/
LABEL_28:
          --v19; /*0x10080dc8b*/
          result = codexmate_lib::core::relay::translator::collect_tool_search_output_tools::hbeb7fc2373e9ba8d( /*0x10080dc95*/
                     32 * v4 + v23,
                     v22);
          v4 = v21; /*0x10080dc9a*/
          v3 = 0; /*0x10080dc9d*/
          if ( !v19 ) /*0x10080dca6*/
            return result; /*0x10080dca6*/
        }
        v25 = v4; /*0x10080dd13*/
        if ( v4 < 8 ) /*0x10080dd1a*/
          goto LABEL_41; /*0x10080dd1a*/
        do /*0x10080dd5d*/
        {
LABEL_40:
          v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 632) /*0x10080dd20*/
                                                                                                  + 632LL)
                                                                                      + 632LL)
                                                                          + 632LL)
                                                              + 632LL)
                                                  + 632LL)
                                      + 632LL)
                          + 632LL);
          v25 -= 8LL; /*0x10080dd59*/
        }
        while ( v25 ); /*0x10080dd5d*/
        goto LABEL_41; /*0x10080dd5d*/
      }
    }
  }
  return result; /*0x10080de59*/
}