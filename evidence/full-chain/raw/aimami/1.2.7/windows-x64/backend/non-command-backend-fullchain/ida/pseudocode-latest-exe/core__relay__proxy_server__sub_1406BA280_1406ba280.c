// win 1.2.7 latest-exe | module src/core/relay/proxy_server.rs | ea 0x1406ba280 | successor of pre-update 0x140d138a0 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_CALLER"}
double __fastcall sub_1406BA280(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdx
  double result; // xmm0_8
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // [rsp+28h] [rbp-8h]

  switch ( *(_BYTE *)(a1 + 744) )
  {
    case 0:
      v2 = *(_QWORD *)(a1 + 56);
      if ( v2 )
      {
        v3 = *(_QWORD *)(a1 + 48);
        do
        {
          sub_1401B16C0(v3);
          v3 += 256;
          --v2;
        }
        while ( v2 );
      }
      v4 = *(_QWORD *)(a1 + 40);
      if ( v4 )
        result = sub_140001660(*(_QWORD *)(a1 + 48), v4 << 8, 8);
      sub_1406C0ED0(a1 + 8);
      return result;
    case 3:
      v9 = a1;
      sub_1406B93B0(a1 + 752);
      goto LABEL_10;
    case 4:
      v9 = a1;
      sub_1406BA120(a1 + 752);
LABEL_10:
      sub_140292FD0(v9 + 320);
      if ( *(_DWORD *)(v9 + 160) != -1 )
        sub_14051B240(v9 + 160);
      goto LABEL_13;
    case 5:
      v9 = a1;
      sub_1406BA120(a1 + 752);
LABEL_13:
      sub_1406C0ED0(v9 + 128);
      v6 = *(_QWORD *)(v9 + 104);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v9 + 96);
        do
        {
          sub_1401B16C0(v7);
          v7 += 256;
          --v6;
        }
        while ( v6 );
      }
      v8 = *(_QWORD *)(v9 + 88);
      if ( v8 )
        result = sub_140001660(*(_QWORD *)(v9 + 96), v8 << 8, 8);
      break;
    default:
      return result;
  }
  return result;
}
