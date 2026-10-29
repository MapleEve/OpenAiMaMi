// win 1.2.7 latest-exe | module src/core/relay/proxy_server.rs | ea 0x1406bae00 | successor of pre-update 0x140d14680 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_CALLER"}
double __fastcall sub_1406BAE00(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  double result; // xmm0_8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // [rsp+28h] [rbp-8h]

  switch ( *(_BYTE *)(a1 + 840) )
  {
    case 0:
      v2 = *(_QWORD *)(a1 + 16);
      if ( v2 )
      {
        v3 = *(_QWORD *)(a1 + 8);
        do
        {
          sub_1401B16C0(v3);
          v3 += 256;
          --v2;
        }
        while ( v2 );
      }
      if ( *(_QWORD *)a1 )
        result = sub_140001660(*(_QWORD *)(a1 + 8), *(_QWORD *)a1 << 8, 8);
      sub_1406C0ED0(a1 + 48);
      v5 = *(_QWORD *)(a1 + 24);
      if ( v5 != -1 && v5 )
      {
        v6 = *(_QWORD *)(a1 + 32);
        v7 = 1;
        goto LABEL_24;
      }
      return result;
    case 3:
      v12 = a1;
      sub_1406B9DE0(a1 + 848);
      goto LABEL_12;
    case 4:
      v12 = a1;
      sub_1406BA120(a1 + 848);
LABEL_12:
      sub_140292FD0(v12 + 416);
      if ( *(_DWORD *)(v12 + 256) != -1 )
        sub_14051B240(v12 + 256);
      sub_1406C0ED0(v12 + 224);
      goto LABEL_16;
    case 5:
      v12 = a1;
      sub_1406BA120(a1 + 848);
      sub_1406C0ED0(a1 + 224);
LABEL_16:
      v8 = *(_QWORD *)(v12 + 184);
      if ( v8 != -1 && v8 )
        result = sub_140001660(*(_QWORD *)(v12 + 192), v8, 1);
      *(_BYTE *)(v12 + 841) = 0;
      v9 = *(_QWORD *)(v12 + 152);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v12 + 144);
        do
        {
          sub_1401B16C0(v10);
          v10 += 256;
          --v9;
        }
        while ( v9 );
      }
      v11 = *(_QWORD *)(v12 + 136);
      if ( v11 )
      {
        v6 = *(_QWORD *)(v12 + 144);
        v5 = v11 << 8;
        v7 = 8;
LABEL_24:
        result = sub_140001660(v6, v5, v7);
      }
      break;
    default:
      return result;
  }
  return result;
}
