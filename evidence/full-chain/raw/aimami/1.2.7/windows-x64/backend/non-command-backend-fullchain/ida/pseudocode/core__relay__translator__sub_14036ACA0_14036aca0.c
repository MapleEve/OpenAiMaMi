// win 1.2.7 | module src/core/relay/translator.rs | ea 0x14036aca0 | name sub_14036ACA0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_14036ACA0(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbx
  bool v7; // cf
  __int64 v8; // rax
  __m128d v9; // rt1

  if ( *(_BYTE *)a1 != *(_BYTE *)a2 )
    return 0;
  result = 1;
  switch ( *(_BYTE *)a1 )
  {
    case 0:
      return result;
    case 1:
      result = *(_BYTE *)(a1 + 1) == *(_BYTE *)(a2 + 1);
      break;
    case 2:
      v8 = *(_QWORD *)(a1 + 8);
      if ( v8 != *(_QWORD *)(a2 + 8) )
        return 0;
      if ( (_DWORD)v8 == 2 )
      {
        v9.m128d_f64[0] = *(double *)(a1 + 16);
        result = LOBYTE(_mm_cmpeq_sd((__m128d)*(unsigned __int64 *)(a2 + 16), v9).m128d_f64[0]) & 1;
      }
      else
      {
        result = *(_QWORD *)(a1 + 16) == *(_QWORD *)(a2 + 16);
      }
      break;
    case 3:
      if ( *(_QWORD *)(a1 + 24) != *(_QWORD *)(a2 + 24) )
        return 0;
      result = (unsigned int)sub_1418F4B70(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 16)) == 0;
      break;
    case 4:
      v3 = *(_QWORD *)(a1 + 24);
      if ( v3 != *(_QWORD *)(a2 + 24) )
        return 0;
      if ( v3 )
      {
        v4 = *(_QWORD *)(a2 + 16);
        v5 = *(_QWORD *)(a1 + 16);
        v6 = v3 - 1;
        do
        {
          result = sub_1404810C0(v5, v4);
          v7 = v6-- != 0;
          if ( !result )
            break;
          v4 += 32;
          v5 += 32;
        }
        while ( v7 );
      }
      break;
    case 5:
      result = sub_140E8E5D0(a1 + 8, a2 + 8);
      break;
  }
  return result;
}
