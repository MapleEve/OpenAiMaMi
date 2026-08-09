// 【中文证据注释】codexmate_lib::core::relay::translator 模块函数，win 侧命名前为 sub_14077FEC0。作用：Anthropic 响应->Codex/OpenAI Responses 风格的【流式增量】SSE 终结事件生成器，按入参 a2 的判别式(tag=0/1/其他)分支：tag=1 构造纯文本增量的 response.output_text.done + response.content_part.done + response.output_item.done(type=output_text)；tag=0 且无签名字段构造 response.reasoning_summary_text.done + response.reasoning_summary_part.done(纯摘要文本流)；tag=0 且带 signature/data 字段构造完整 reasoning 输出项 {type:reasoning,status:completed,summary:[{type:summary_text,text:...}]}，并在其中调用 set_anthropic_thinking_carrier(0x140a28fb0) 把 thinking/redacted_thinking 内容序列化+base64+私有前缀'aimami-anthropic-thinking-v1:'封装进 encrypted_content 字段后再包进 response.output_item.done 事件追加到输出流；tag 非0/1 委托给 sub_1407858E0。证据来源：完整反编译(61310字符)+多处 qm
__int64 __fastcall emit_response_done_events_for_delta(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  _DWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  void *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _DWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r12
  __int64 v32; // rdi
  __int64 v33; // r15
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // r14
  _DWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  void *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  _DWORD *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdi
  __int64 result; // rax
  __int64 v54; // r14
  _DWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  void *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  void *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  _DWORD *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  int v75; // edi
  __int64 v76; // r14
  __int64 v77; // rax
  __int64 v78; // r14
  unsigned int v79; // r12d
  __int64 v80; // rax
  __int64 v81; // r15
  __int64 v82; // rax
  __int64 v83; // r12
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  void *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  _DWORD *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // r14
  __int64 v99; // rdi
  __int64 v100; // rax
  __int64 v101; // r15
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  unsigned int v106; // r15d
  __int64 v107; // rax
  _DWORD *v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  _WORD *v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rdi
  __int64 v124; // rax
  __int64 v125; // r14
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // r9
  void *v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  _DWORD *v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // r14
  __int64 v141; // rax
  __int64 v142; // r13
  __int64 v143; // r15
  _QWORD *v144; // rcx
  __int64 v145; // r13
  __int64 v146; // r13
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  _DWORD *v151; // rax
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  _BYTE *v156; // rax
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // r8
  __int64 v160; // r9
  void *v161; // rax
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // r8
  __int64 v165; // r9
  __int64 v166; // r15
  _DWORD *v167; // rax
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // r9
  __int64 v172; // rax
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // r8
  __int64 v176; // r9
  void *v177; // rax
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // r9
  _DWORD *v182; // rax
  __int64 v183; // rdx
  __int64 v184; // rcx
  __int64 v185; // r8
  __int64 v186; // r9
  _DWORD *v187; // rax
  __int64 v188; // rdx
  __int64 v189; // rcx
  __int64 v190; // r8
  __int64 v191; // r9
  _BYTE *v192; // rax
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // r8
  __int64 v196; // r9
  __int64 v197; // r15
  _DWORD *v198; // rax
  __int64 v199; // rdx
  __int64 v200; // rcx
  __int64 v201; // r8
  __int64 v202; // r9
  __int64 v203; // rax
  __int64 v204; // rdx
  __int64 v205; // rcx
  __int64 v206; // r8
  __int64 v207; // r9
  void *v208; // rax
  __int64 v209; // r15
  _QWORD *v210; // rcx
  __int64 v211; // r13
  __int64 v212; // rdx
  __int64 v213; // rcx
  __int64 v214; // r8
  __int64 v215; // r9
  _DWORD *v216; // rax
  __int64 v217; // rdx
  __int64 v218; // rcx
  __int64 v219; // r8
  __int64 v220; // r9
  _DWORD *v221; // rax
  __int64 v222; // rdx
  __int64 v223; // rcx
  __int64 v224; // r8
  __int64 v225; // r9
  __int64 v226; // r15
  _WORD *v227; // rax
  __int64 v228; // rdx
  __int64 v229; // rcx
  __int64 v230; // r8
  __int64 v231; // r9
  __int64 v232; // rax
  __int64 v233; // rdx
  __int64 v234; // rcx
  __int64 v235; // r8
  __int64 v236; // r9
  __int64 v237; // rax
  __int64 v238; // rdx
  __int64 v239; // rcx
  __int64 v240; // r8
  __int64 v241; // r9
  __int64 v242; // rax
  __int64 v243; // rdx
  __int64 v244; // rcx
  __int64 v245; // r8
  __int64 v246; // r9
  _DWORD *v247; // rax
  __int64 v248; // rdx
  __int64 v249; // rcx
  __int64 v250; // r8
  __int64 v251; // r9
  __int64 v252; // rax
  __int64 v253; // rdx
  __int64 v254; // rcx
  __int64 v255; // r8
  __int64 v256; // r9
  _DWORD *v257; // rax
  __int64 v258; // rdx
  __int64 v259; // rcx
  __int64 v260; // r8
  __int64 v261; // r9
  __int64 v262; // rax
  __int64 v263; // rdx
  __int64 v264; // rcx
  __int64 v265; // r8
  __int64 v266; // r9
  _BYTE *v267; // r15
  _DWORD *v268; // rax
  __int64 v269; // rdx
  __int64 v270; // rcx
  __int64 v271; // r8
  __int64 v272; // r9
  void *v273; // rax
  __int64 v274; // rdx
  __int64 v275; // rcx
  __int64 v276; // r8
  __int64 v277; // r9
  __int64 v278; // r15
  _DWORD *v279; // rax
  __int64 v280; // rdx
  __int64 v281; // rcx
  __int64 v282; // r8
  __int64 v283; // r9
  __int64 v284; // rax
  __int64 v285; // rdx
  __int64 v286; // rcx
  __int64 v287; // r8
  __int64 v288; // r9
  void *v289; // rax
  __int64 v290; // rcx
  __int128 v291; // xmm0
  __int64 v292; // rdx
  __int64 v293; // rcx
  __int64 v294; // r8
  __int64 v295; // r9
  _DWORD *v296; // rax
  __int64 v297; // rdx
  __int64 v298; // rcx
  __int64 v299; // r8
  __int64 v300; // r9
  _BYTE *v301; // rax
  __int64 v302; // rdx
  __int64 v303; // rcx
  __int64 v304; // r8
  __int64 v305; // r9
  void *v306; // rax
  __int64 v307; // rdx
  __int64 v308; // rcx
  __int64 v309; // r8
  __int64 v310; // r9
  __int64 v311; // r14
  _DWORD *v312; // rax
  __int64 v313; // rdx
  __int64 v314; // rcx
  __int64 v315; // r8
  __int64 v316; // r9
  __int64 v317; // rax
  __int64 v318; // rdx
  __int64 v319; // rcx
  __int64 v320; // r8
  __int64 v321; // r9
  _DWORD *v322; // rax
  __int64 v323; // rdi
  __int64 v324; // r14
  _QWORD *v325; // rcx
  __int64 v326; // rdi
  __int64 v327; // rcx
  __int128 v328; // xmm0
  __int64 v329; // rdx
  __int64 v330; // rcx
  __int64 v331; // rdx
  __int64 v332; // rcx
  __int64 v333; // r8
  __int64 v334; // r9
  __int64 v335; // rax
  __int64 v336; // rdx
  __int64 v337; // rcx
  __int64 v338; // r8
  __int64 v339; // r9
  __int64 v340; // rax
  __int64 v341; // rdx
  __int64 v342; // rcx
  __int64 v343; // r8
  __int64 v344; // r9
  _DWORD *v345; // rax
  __int64 v346; // rcx
  __int64 v347; // r8
  __int64 v348; // r9
  __int128 v349; // rax
  _DWORD *v350; // r14
  __int64 v351; // rax
  __int64 v352; // rdx
  __int64 v353; // rcx
  __int64 v354; // r8
  __int64 v355; // r9
  _BYTE *v356; // rdi
  _DWORD *v357; // rax
  __int64 v358; // rdx
  __int64 v359; // rcx
  __int64 v360; // r8
  __int64 v361; // r9
  void *v362; // rax
  __int64 v363; // rdx
  __int64 v364; // rcx
  __int64 v365; // r8
  __int64 v366; // r9
  _DWORD *v367; // rax
  __int64 v368; // rdx
  __int64 v369; // rcx
  __int64 v370; // r8
  __int64 v371; // r9
  __int128 v372; // kr30_16
  __int64 v373; // rdi
  __int64 v374; // rdx
  __int64 v375; // rcx
  __int64 v376; // r8
  __int64 v377; // r9
  _DWORD *v378; // rax
  __int64 v379; // rdx
  __int64 v380; // rcx
  __int64 v381; // r8
  __int64 v382; // r9
  _BYTE *v383; // rax
  __int64 v384; // rdx
  __int64 v385; // rcx
  __int64 v386; // r8
  __int64 v387; // r9
  void *v388; // rax
  __int64 v389; // rdx
  __int64 v390; // rcx
  __int64 v391; // r8
  __int64 v392; // r9
  __int64 v393; // r14
  _DWORD *v394; // rax
  __int64 v395; // rdx
  __int64 v396; // rcx
  __int64 v397; // r8
  __int64 v398; // r9
  __int64 v399; // rax
  __int64 v400; // rdx
  __int64 v401; // rcx
  __int64 v402; // r8
  __int64 v403; // r9
  _DWORD *v404; // rax
  __int64 v405; // rbx
  __int64 v406; // rdi
  _QWORD *v407; // rcx
  __int64 v408; // r14
  __int64 v409; // rdi
  __int64 v410; // rax
  __int64 v411; // rcx
  __int128 v412; // xmm0
  __int64 v413; // r13
  _QWORD *v414; // rcx
  __int64 v415; // r12
  __int64 v416; // r12
  __int64 v417; // rdx
  __int64 v418; // rcx
  __int64 v419; // r8
  __int64 v420; // r9
  _DWORD *v421; // rax
  __int64 v422; // rdx
  __int64 v423; // rcx
  __int64 v424; // r8
  __int64 v425; // r9
  __int64 v426; // rax
  __int64 v427; // rdx
  __int64 v428; // rcx
  __int64 v429; // r8
  __int64 v430; // r9
  void *v431; // rax
  __int64 v432; // rdx
  __int64 v433; // rcx
  __int64 v434; // r8
  __int64 v435; // r9
  __int64 v436; // r13
  _DWORD *v437; // rax
  __int64 v438; // rdx
  __int64 v439; // rcx
  __int64 v440; // r8
  __int64 v441; // r9
  __int64 v442; // rax
  __int64 v443; // rdx
  __int64 v444; // rcx
  __int64 v445; // r8
  __int64 v446; // r9
  void *v447; // rax
  __int64 v448; // rdx
  __int64 v449; // rcx
  __int64 v450; // r8
  __int64 v451; // r9
  _DWORD *v452; // rax
  __int64 v453; // rdx
  __int64 v454; // rcx
  __int64 v455; // r8
  __int64 v456; // r9
  _DWORD *v457; // rax
  __int64 v458; // rdx
  __int64 v459; // rcx
  __int64 v460; // r8
  __int64 v461; // r9
  void *v462; // rax
  __int64 v463; // rdx
  __int64 v464; // rcx
  __int64 v465; // r8
  __int64 v466; // r9
  _DWORD *v467; // rax
  __int64 v468; // rdx
  __int64 v469; // rcx
  __int64 v470; // r8
  __int64 v471; // r9
  __int64 v472; // rdi
  __int64 v473; // rax
  __int64 v474; // r15
  __int64 v475; // rdi
  __int64 v476; // r15
  _QWORD *v477; // rcx
  __int64 v478; // rdx
  __int64 v479; // rcx
  __int64 v480; // r8
  __int64 v481; // r9
  _DWORD *v482; // rax
  __int64 v483; // rdx
  __int64 v484; // rcx
  __int64 v485; // r8
  __int64 v486; // r9
  _QWORD *v487; // rax
  __int64 v488; // rdx
  __int64 v489; // rcx
  __int64 v490; // r8
  __int64 v491; // r9
  _QWORD *v492; // rax
  __int64 v493; // rdx
  __int64 v494; // rcx
  __int64 v495; // r8
  __int64 v496; // r9
  __int128 v497; // kr70_16
  __int64 v498; // rdi
  __int64 v499; // rax
  __int64 v500; // r12
  unsigned int v501; // r12d
  __int64 v502; // rax
  __int64 v503; // r15
  __int64 v504; // rcx
  __int64 v505; // r8
  __int64 v506; // r9
  __int64 v507; // rdx
  __int64 v508; // rax
  __int64 v509; // rdx
  __int64 v510; // r8
  __int64 v511; // r9
  __int64 v512; // rdi
  __int64 v513; // rax
  __int64 v514; // r15
  __int64 v515; // rcx
  __int64 v516; // [rsp+20h] [rbp-60h]
  __int64 v517; // [rsp+20h] [rbp-60h]
  __int64 v518; // [rsp+20h] [rbp-60h]
  __int64 v519; // [rsp+20h] [rbp-60h]
  __int64 v520; // [rsp+20h] [rbp-60h]
  __int64 v521; // [rsp+20h] [rbp-60h]
  __int64 v522; // [rsp+20h] [rbp-60h]
  __int64 v523; // [rsp+20h] [rbp-60h]
  __int64 v524; // [rsp+20h] [rbp-60h]
  __int64 v525; // [rsp+20h] [rbp-60h]
  __int64 v526; // [rsp+20h] [rbp-60h]
  __int64 v527; // [rsp+20h] [rbp-60h]
  __int64 v528; // [rsp+20h] [rbp-60h]
  __int64 v529; // [rsp+20h] [rbp-60h]
  __int64 v530; // [rsp+20h] [rbp-60h]
  __int64 v531; // [rsp+20h] [rbp-60h]
  __int64 v532; // [rsp+20h] [rbp-60h]
  __int64 v533; // [rsp+20h] [rbp-60h]
  __int64 v534; // [rsp+20h] [rbp-60h]
  __int64 v535; // [rsp+20h] [rbp-60h]
  __int64 v536; // [rsp+20h] [rbp-60h]
  __int64 v537; // [rsp+20h] [rbp-60h]
  __int64 v538; // [rsp+20h] [rbp-60h]
  __int64 v539; // [rsp+20h] [rbp-60h]
  __int64 v540; // [rsp+20h] [rbp-60h]
  __int64 v541; // [rsp+20h] [rbp-60h]
  __int64 v542; // [rsp+20h] [rbp-60h]
  __int64 v543; // [rsp+20h] [rbp-60h]
  __int64 v544; // [rsp+20h] [rbp-60h]
  __int64 v545; // [rsp+20h] [rbp-60h]
  __int64 v546; // [rsp+20h] [rbp-60h]
  __int64 v547; // [rsp+20h] [rbp-60h]
  __int64 v548; // [rsp+20h] [rbp-60h]
  __int64 v549; // [rsp+20h] [rbp-60h]
  __int64 v550; // [rsp+20h] [rbp-60h]
  __int64 v551; // [rsp+20h] [rbp-60h]
  __int64 v552; // [rsp+20h] [rbp-60h]
  __int64 v553; // [rsp+20h] [rbp-60h]
  __int64 v554; // [rsp+20h] [rbp-60h]
  __int64 v555; // [rsp+20h] [rbp-60h]
  __int64 v556; // [rsp+20h] [rbp-60h]
  __int64 v557; // [rsp+20h] [rbp-60h]
  __int64 v558; // [rsp+20h] [rbp-60h]
  __int64 v559; // [rsp+20h] [rbp-60h]
  __int64 v560; // [rsp+20h] [rbp-60h]
  __int64 v561; // [rsp+20h] [rbp-60h]
  __int64 v562; // [rsp+20h] [rbp-60h]
  __int64 v563; // [rsp+20h] [rbp-60h]
  __int64 v564; // [rsp+20h] [rbp-60h]
  __int64 v565; // [rsp+20h] [rbp-60h]
  __int64 v566; // [rsp+20h] [rbp-60h]
  __int64 v567; // [rsp+20h] [rbp-60h]
  __int64 v568; // [rsp+20h] [rbp-60h]
  __int64 v569; // [rsp+20h] [rbp-60h]
  __int64 v570; // [rsp+20h] [rbp-60h]
  __int64 v571; // [rsp+20h] [rbp-60h]
  __int64 v572; // [rsp+20h] [rbp-60h]
  __int64 v573; // [rsp+20h] [rbp-60h]
  __int64 v574; // [rsp+20h] [rbp-60h]
  __int64 v575; // [rsp+20h] [rbp-60h]
  __int64 v576; // [rsp+20h] [rbp-60h]
  __int64 v577; // [rsp+20h] [rbp-60h]
  __int64 v578; // [rsp+20h] [rbp-60h]
  __int64 v579; // [rsp+20h] [rbp-60h]
  __int64 v580; // [rsp+20h] [rbp-60h]
  __int64 v581; // [rsp+20h] [rbp-60h]
  __int64 v582; // [rsp+20h] [rbp-60h]
  __int64 v583; // [rsp+20h] [rbp-60h]
  __int64 v584; // [rsp+20h] [rbp-60h]
  __int64 v585; // [rsp+20h] [rbp-60h]
  __int64 v586; // [rsp+20h] [rbp-60h]
  __int128 v587; // [rsp+70h] [rbp-10h] BYREF
  __int64 v588; // [rsp+80h] [rbp+0h]
  __int64 v589; // [rsp+88h] [rbp+8h]
  __int64 v590; // [rsp+90h] [rbp+10h]
  __int64 v591; // [rsp+98h] [rbp+18h]
  __int128 v592; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v593; // [rsp+B0h] [rbp+30h]
  void *v594; // [rsp+B8h] [rbp+38h]
  __int64 v595; // [rsp+C0h] [rbp+40h]
  __int128 v596; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v597; // [rsp+D8h] [rbp+58h]
  _BYTE *v598; // [rsp+E0h] [rbp+60h]
  __int64 v599; // [rsp+E8h] [rbp+68h]
  __int64 v600; // [rsp+F0h] [rbp+70h]
  __int128 v601; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v602; // [rsp+108h] [rbp+88h]
  _QWORD *v603; // [rsp+110h] [rbp+90h]
  char v604; // [rsp+11Dh] [rbp+9Dh]
  char v605; // [rsp+11Eh] [rbp+9Eh]
  char v606; // [rsp+11Fh] [rbp+9Fh]
  char v607; // [rsp+120h] [rbp+A0h]
  char v608; // [rsp+121h] [rbp+A1h]
  char v609; // [rsp+122h] [rbp+A2h]
  char v610; // [rsp+123h] [rbp+A3h]
  char v611; // [rsp+124h] [rbp+A4h]
  char v612; // [rsp+125h] [rbp+A5h]
  char v613; // [rsp+126h] [rbp+A6h]
  char v614; // [rsp+127h] [rbp+A7h]
  char v615; // [rsp+128h] [rbp+A8h]
  char v616; // [rsp+129h] [rbp+A9h]
  char v617; // [rsp+12Ah] [rbp+AAh]
  char v618; // [rsp+12Bh] [rbp+ABh]
  char v619; // [rsp+12Ch] [rbp+ACh]
  char v620; // [rsp+12Dh] [rbp+ADh]
  char v621; // [rsp+12Eh] [rbp+AEh]
  char v622; // [rsp+12Fh] [rbp+AFh]
  __m256i v623; // [rsp+130h] [rbp+B0h] BYREF
  __int128 v624; // [rsp+150h] [rbp+D0h]
  __int64 v625; // [rsp+160h] [rbp+E0h]
  __int64 v626; // [rsp+168h] [rbp+E8h]
  _BYTE *v627; // [rsp+170h] [rbp+F0h]
  __int128 v628; // [rsp+178h] [rbp+F8h] BYREF
  __int64 v629; // [rsp+188h] [rbp+108h]
  char v630; // [rsp+197h] [rbp+117h]
  __m256i v631; // [rsp+198h] [rbp+118h] BYREF
  char v632; // [rsp+1BCh] [rbp+13Ch]
  char v633; // [rsp+1BDh] [rbp+13Dh]
  char v634; // [rsp+1BEh] [rbp+13Eh]
  char v635; // [rsp+1BFh] [rbp+13Fh]
  __m256i v636; // [rsp+1C0h] [rbp+140h] BYREF
  char v637; // [rsp+1EFh] [rbp+16Fh]
  __m256i v638; // [rsp+1F0h] [rbp+170h] BYREF
  __int64 v639; // [rsp+210h] [rbp+190h]

  v639 = -2;
  v603 = a5;
  v6 = *(_QWORD *)a2 ^ 0x8000000000000000uLL;
  v7 = 2;
  if ( *(__int64 *)a2 < 0 )
    v7 = *(_QWORD *)a2 ^ 0x8000000000000000uLL;
  if ( v7 )
  {
    if ( v7 != 1 )
      return sub_1407858E0((_DWORD)a1, a2, a3, a4, (__int64)a5);
    v625 = *(_QWORD *)(a2 + 56);
    v8 = *(_OWORD *)(a2 + 8);
    v9 = *(_OWORD *)(a2 + 24);
    v624 = *(_OWORD *)(a2 + 40);
    *(_OWORD *)&v623.m256i_u64[2] = v9;
    *(_OWORD *)v623.m256i_i8 = v8;
    *(_QWORD *)&v628 = 0;
    v629 = 0;
    nullsub_1(v6, a2, a3, a4, v516);
    v10 = (_DWORD *)sub_140001650(4, 1);
    if ( !v10 )
      sub_14176E54B(1, 4);
    *v10 = 1701869940;
    v631.m256i_i64[0] = 4;
    v631.m256i_i64[1] = (__int64)v10;
    v631.m256i_i64[2] = 4;
    nullsub_1(v12, v11, v13, v14, v517);
    v15 = (void *)sub_140001650(25, 1);
    v600 = (__int64)v15;
    if ( !v15 )
      sub_14176E54B(1, 25);
    qmemcpy(v15, "response.output_text.done", 25);
    v638.m256i_i8[0] = 3;
    v638.m256i_i64[1] = 25;
    v638.m256i_i64[2] = (__int64)v15;
    v638.m256i_i64[3] = 25;
    sub_1401A27E0(&v636, &v628, &v631, &v638);
    if ( v636.m256i_i8[0] != -1 )
      sub_1401FF690(&v636);
    nullsub_1(v17, v16, v18, v19, v518);
    v20 = (void *)sub_140001650(12, 1);
    if ( !v20 )
      sub_14176E54B(1, 12);
    qmemcpy(v20, "output_index", 12);
    v631.m256i_i64[0] = 12;
    v631.m256i_i64[1] = (__int64)v20;
    v631.m256i_i64[2] = 12;
    v21 = (unsigned int)v625;
    v638.m256i_i8[0] = 2;
    v638.m256i_i64[1] = 0;
    v638.m256i_i64[2] = (unsigned int)v625;
    sub_1401A27E0(&v636, &v628, &v631, &v638);
    if ( v636.m256i_i8[0] != -1 )
      sub_1401FF690(&v636);
    nullsub_1(v23, v22, v24, v25, v519);
    v26 = (_DWORD *)sub_140001650(7, 1);
    if ( !v26 )
      sub_14176E54B(1, 7);
    *(_DWORD *)((char *)v26 + 3) = 1684627309;
    *v26 = 1835365481;
    v631.m256i_i64[0] = 7;
    v631.m256i_i64[1] = (__int64)v26;
    v631.m256i_i64[2] = 7;
    v31 = v623.m256i_i64[2];
    if ( v623.m256i_i64[2] < 0 )
    {
      v32 = 0;
      goto LABEL_15;
    }
    v600 = v623.m256i_i64[1];
    if ( v623.m256i_i64[2] )
    {
      nullsub_1(v28, v27, v29, v30, v520);
      v32 = 1;
      v77 = sub_140001650(v623.m256i_i64[2], 1);
      if ( !v77 )
      {
LABEL_15:
        v611 = 1;
        sub_14176E54B(v32, v623.m256i_i64[2]);
      }
      v78 = v77;
      sub_14172B820(v77, v600, v623.m256i_i64[2]);
    }
    else
    {
      v78 = 1;
    }
    v638.m256i_i8[0] = 3;
    v638.m256i_i64[1] = v623.m256i_i64[2];
    v638.m256i_i64[2] = v78;
    v638.m256i_i64[3] = v623.m256i_i64[2];
    v611 = 0;
    sub_1401A27E0(&v636, &v628, &v631, &v638);
    if ( v636.m256i_i8[0] != -1 )
      sub_1401FF690(&v636);
    nullsub_1(v85, v84, v86, v87, v520);
    v88 = (void *)sub_140001650(13, 1);
    if ( !v88 )
      sub_14176E54B(1, 13);
    qmemcpy(v88, "content_index", 13);
    v631.m256i_i64[0] = 13;
    v631.m256i_i64[1] = (__int64)v88;
    v631.m256i_i64[2] = 13;
    v638.m256i_i8[0] = 2;
    *(_OWORD *)&v638.m256i_u64[1] = 0;
    sub_1401A27E0(&v636, &v628, &v631, &v638);
    if ( v636.m256i_i8[0] != -1 )
      sub_1401FF690(&v636);
    nullsub_1(v90, v89, v91, v92, v528);
    v93 = (_DWORD *)sub_140001650(4, 1);
    if ( !v93 )
      sub_14176E54B(1, 4);
    *v93 = 1954047348;
    v631.m256i_i64[0] = 4;
    v631.m256i_i64[1] = (__int64)v93;
    v631.m256i_i64[2] = 4;
    v98 = *((_QWORD *)&v624 + 1);
    if ( v624 < 0 )
    {
      v99 = 0;
      goto LABEL_55;
    }
    v595 = v624;
    if ( *((_QWORD *)&v624 + 1) )
    {
      nullsub_1(v95, v94, v96, v97, v529);
      v99 = 1;
      v100 = sub_140001650(*((_QWORD *)&v624 + 1), 1);
      if ( !v100 )
      {
LABEL_55:
        v610 = 1;
        sub_14176E54B(v99, *((_QWORD *)&v624 + 1));
      }
      v101 = v100;
      sub_14172B820(v100, v595, *((_QWORD *)&v624 + 1));
    }
    else
    {
      v101 = 1;
    }
    v638.m256i_i8[0] = 3;
    v638.m256i_i64[1] = *((_QWORD *)&v624 + 1);
    v638.m256i_i64[2] = v101;
    v638.m256i_i64[3] = *((_QWORD *)&v624 + 1);
    v610 = 0;
    sub_1401A27E0(&v636, &v628, &v631, &v638);
    if ( v636.m256i_i8[0] != -1 )
      sub_1401FF690(&v636);
    *(_OWORD *)&v638.m256i_u64[1] = v628;
    v638.m256i_i64[3] = v629;
    v638.m256i_i8[0] = 5;
    sub_14077FD10((unsigned int)&v636, (_DWORD)a1 + 240, (unsigned int)&xmmword_14183DCA5, 25, (__int64)&v638);
    v143 = v636.m256i_i64[2];
    v627 = (_BYTE *)v636.m256i_i64[1];
    v144 = v603;
    v145 = v603[2];
    if ( v636.m256i_i64[2] > (unsigned __int64)(*v603 - v145) )
    {
      sub_14172C420((_DWORD)v603, v145, v636.m256i_i32[4], 1, 1);
      v144 = v603;
      v145 = v603[2];
    }
    else if ( !v636.m256i_i64[2] )
    {
      goto LABEL_93;
    }
    sub_14172B820(v145 + v144[1], v627, v143);
    v144 = v603;
LABEL_93:
    v146 = v143 + v145;
    v144[2] = v146;
    if ( v636.m256i_i64[0] )
      sub_140001660(v627, v636.m256i_i64[0], 1);
    sub_1401FF690(&v638);
    *(_QWORD *)&v596 = 0;
    v597 = 0;
    nullsub_1(v148, v147, v149, v150, v535);
    v151 = (_DWORD *)sub_140001650(4, 1);
    if ( !v151 )
      sub_14176E54B(1, 4);
    *v151 = 1701869940;
    v631.m256i_i64[0] = 4;
    v631.m256i_i64[1] = (__int64)v151;
    v631.m256i_i64[2] = 4;
    nullsub_1(v153, v152, v154, v155, v536);
    v156 = (_BYTE *)sub_140001650(26, 1);
    v627 = v156;
    if ( !v156 )
      sub_14176E54B(1, 26);
    qmemcpy(v156, "response.content_part.done", 26);
    v638.m256i_i8[0] = 3;
    v638.m256i_i64[1] = 26;
    v638.m256i_i64[2] = (__int64)v156;
    v638.m256i_i64[3] = 26;
    sub_1401A27E0(&v636, &v596, &v631, &v638);
    if ( v636.m256i_i8[0] != -1 )
      sub_1401FF690(&v636);
    nullsub_1(v158, v157, v159, v160, v537);
    v161 = (void *)sub_140001650(12, 1);
    if ( !v161 )
      sub_14176E54B(1, 12);
    qmemcpy(v161, "output_index", 12);
    v631.m256i_i64[0] = 12;
    v631.m256i_i64[1] = (__int64)v161;
    v631.m256i_i64[2] = 12;
    v638.m256i_i8[0] = 2;
    v638.m256i_i64[1] = 0;
    v638.m256i_i64[2] = v21;
    sub_1401A27E0(&v636, &v596, &v631, &v638);
    if ( v636.m256i_i8[0] != -1 )
      sub_1401FF690(&v636);
    nullsub_1(v163, v162, v164, v165, v538);
    v166 = 1;
    v167 = (_DWORD *)sub_140001650(7, 1);
    if ( !v167 )
      sub_14176E54B(1, 7);
    *(_DWORD *)((char *)v167 + 3) = 1684627309;
    *v167 = 1835365481;
    v631.m256i_i64[0] = 7;
    v631.m256i_i64[1] = (__int64)v167;
    v631.m256i_i64[2] = 7;
    if ( v31 )
    {
      nullsub_1(v169, v168, v170, v171, v539);
      v172 = sub_140001650(v31, 1);
      if ( !v172 )
      {
        v609 = 1;
        sub_14176E54B(1, v31);
      }
      v166 = v172;
      sub_14172B820(v172, v600, v31);
    }
    v638.m256i_i8[0] = 3;
    v638.m256i_i64[1] = v31;
    v638.m256i_i64[2] = v166;
    v638.m256i_i64[3] = v31;
    v609 = 0;
    sub_1401A27E0(&v636, &v596, &v631, &v638);
    if ( v636.m256i_i8[0] != -1 )
      sub_1401FF690(&v636);
    nullsub_1(v174, v173, v175, v176, v539);
    v177 = (void *)sub_140001650(13, 1);
    if ( !v177 )
      sub_14176E54B(1, 13);
    qmemcpy(v177, "content_index", 13);
    v631.m256i_i64[0] = 13;
    v631.m256i_i64[1] = (__int64)v177;
    v631.m256i_i64[2] = 13;
    v638.m256i_i8[0] = 2;
    *(_OWORD *)&v638.m256i_u64[1] = 0;
    sub_1401A27E0(&v636, &v596, &v631, &v638);
    if ( v636.m256i_i8[0] != -1 )
      sub_1401FF690(&v636);
    nullsub_1(v179, v178, v180, v181, v540);
    v182 = (_DWORD *)sub_140001650(4, 1);
    if ( !v182 )
      sub_14176E54B(1, 4);
    *v182 = 1953653104;
    *(_QWORD *)&v601 = 4;
    *((_QWORD *)&v601 + 1) = v182;
    v602 = 4;
    *(_QWORD *)&v628 = 0;
    v629 = 0;
    nullsub_1(v184, v183, v185, v186, v541);
    v187 = (_DWORD *)sub_140001650(4, 1);
    if ( !v187 )
      sub_14176E54B(1, 4);
    *v187 = 1701869940;
    v631.m256i_i64[0] = 4;
    v631.m256i_i64[1] = (__int64)v187;
    v631.m256i_i64[2] = 4;
    nullsub_1(v189, v188, v190, v191, v542);
    v192 = (_BYTE *)sub_140001650(11, 1);
    v627 = v192;
    if ( !v192 )
      sub_14176E54B(1, 11);
    qmemcpy(v192, "output_text", 11);
    v638.m256i_i8[0] = 3;
    v638.m256i_i64[1] = 11;
    v638.m256i_i64[2] = (__int64)v192;
    v638.m256i_i64[3] = 11;
    sub_1401A27E0(&v636, &v628, &v631, &v638);
    if ( v636.m256i_i8[0] != -1 )
      sub_1401FF690(&v636);
    nullsub_1(v194, v193, v195, v196, v543);
    v197 = 1;
    v198 = (_DWORD *)sub_140001650(4, 1);
    if ( !v198 )
      sub_14176E54B(1, 4);
    *v198 = 1954047348;
    v631.m256i_i64[0] = 4;
    v631.m256i_i64[1] = (__int64)v198;
    v631.m256i_i64[2] = 4;
    if ( v98 )
    {
      nullsub_1(v200, v199, v201, v202, v544);
      v203 = sub_140001650(v98, 1);
      if ( !v203 )
      {
        v608 = 1;
        sub_14176E54B(1, v98);
      }
      v197 = v203;
      sub_14172B820(v203, v595, v98);
    }
    v638.m256i_i8[0] = 3;
    v638.m256i_i64[1] = v98;
    v638.m256i_i64[2] = v197;
    v638.m256i_i64[3] = v98;
    v608 = 0;
    sub_1401A27E0(&v636, &v628, &v631, &v638);
    if ( v636.m256i_i8[0] != -1 )
      sub_1401FF690(&v636);
    nullsub_1(v205, v204, v206, v207, v544);
    v208 = (void *)sub_140001650(11, 1);
    if ( !v208 )
      sub_14176E54B(1, 11);
    qmemcpy(v208, "annotations", 11);
    v631.m256i_i64[0] = 11;
    v631.m256i_i64[1] = (__int64)v208;
    v631.m256i_i64[2] = 11;
    v638.m256i_i64[1] = 0;
    *(_OWORD *)&v638.m256i_u64[2] = 8u;
    v638.m256i_i8[0] = 4;
    sub_1401A27E0(&v636, &v628, &v631, &v638);
    if ( v636.m256i_i8[0] != -1 )
      sub_1401FF690(&v636);
    *(_OWORD *)&v638.m256i_u64[1] = v628;
    v638.m256i_i64[3] = v629;
    v638.m256i_i8[0] = 5;
    v607 = 0;
    sub_1401A27E0(&v636, &v596, &v601, &v638);
    if ( v636.m256i_i8[0] != -1 )
      sub_1401FF690(&v636);
    *(_OWORD *)&v638.m256i_u64[1] = v596;
    v638.m256i_i64[3] = v597;
    v638.m256i_i8[0] = 5;
    sub_14077FD10((unsigned int)&v636, (_DWORD)a1 + 240, (unsigned int)&xmmword_14183DCBE, 26, (__int64)&v638);
    v209 = v636.m256i_i64[2];
    v627 = (_BYTE *)v636.m256i_i64[1];
    v210 = v603;
    if ( v636.m256i_i64[2] > (unsigned __int64)(*v603 - v146) )
    {
      sub_14172C420((_DWORD)v603, v146, v636.m256i_i32[4], 1, 1);
      v210 = v603;
      v146 = v603[2];
    }
    else if ( !v636.m256i_i64[2] )
    {
      goto LABEL_130;
    }
    sub_14172B820(v146 + v210[1], v627, v209);
    v210 = v603;
LABEL_130:
    v211 = v209 + v146;
    v210[2] = v211;
    if ( v636.m256i_i64[0] )
      sub_140001660(v627, v636.m256i_i64[0], 1);
    sub_1401FF690(&v638);
    *(_QWORD *)&v596 = 0;
    v597 = 0;
    nullsub_1(v213, v212, v214, v215, v545);
    v216 = (_DWORD *)sub_140001650(4, 1);
    if ( !v216 )
      sub_14176E54B(1, 4);
    *v216 = 1701869940;
    v631.m256i_i64[0] = 4;
    v631.m256i_i64[1] = (__int64)v216;
    v631.m256i_i64[2] = 4;
    nullsub_1(v218, v217, v219, v220, v546);
    v221 = (_DWORD *)sub_140001650(7, 1);
    v627 = v221;
    if ( !v221 )
      sub_14176E54B(1, 7);
    *(_DWORD *)((char *)v221 + 3) = 1701273971;
    *v221 = 1936942445;
    v638.m256i_i8[0] = 3;
    v638.m256i_i64[1] = 7;
    v638.m256i_i64[2] = (__int64)v221;
    v638.m256i_i64[3] = 7;
    sub_1401A27E0(&v636, &v596, &v631, &v638);
    if ( v636.m256i_i8[0] != -1 )
      sub_1401FF690(&v636);
    nullsub_1(v223, v222, v224, v225, v547);
    v226 = 1;
    v227 = (_WORD *)sub_140001650(2, 1);
    if ( !v227 )
      sub_14176E54B(1, 2);
    *v227 = 25705;
    v631.m256i_i64[0] = 2;
    v631.m256i_i64[1] = (__int64)v227;
    v631.m256i_i64[2] = 2;
    if ( v31 )
    {
      nullsub_1(v229, v228, v230, v231, v548);
      v232 = sub_140001650(v31, 1);
      if ( !v232 )
      {
        v606 = 1;
        sub_14176E54B(1, v31);
      }
      v226 = v232;
      sub_14172B820(v232, v600, v31);
    }
    v638.m256i_i8[0] = 3;
    v638.m256i_i64[1] = v31;
    v638.m256i_i64[2] = v226;
    v638.m256i_i64[3] = v31;
    v606 = 0;
    sub_1401A27E0(&v636, &v596, &v631, &v638);
    if ( v636.m256i_i8[0] != -1 )
      sub_1401FF690(&v636);
    nullsub_1(v234, v233, v235, v236, v548);
    v237 = sub_140001650(6, 1);
    if ( !v237 )
      sub_14176E54B(1, 6);
    *(_WORD *)(v237 + 4) = 29557;
    *(_DWORD *)v237 = 1952543859;
    v631.m256i_i64[0] = 6;
    v631.m256i_i64[1] = v237;
    v631.m256i_i64[2] = 6;
    nullsub_1(v239, v238, v240, v241, v549);
    v242 = sub_140001650(9, 1);
    v627 = (_BYTE *)v242;
    if ( !v242 )
      sub_14176E54B(1, 9);
    *(_QWORD *)v242 = 0x6574656C706D6F63LL;
    *(_BYTE *)(v242 + 8) = 100;
    v638.m256i_i8[0] = 3;
    v638.m256i_i64[1] = 9;
    v638.m256i_i64[2] = v242;
    v638.m256i_i64[3] = 9;
    sub_1401A27E0(&v636, &v596, &v631, &v638);
    if ( v636.m256i_i8[0] != -1 )
      sub_1401FF690(&v636);
    nullsub_1(v244, v243, v245, v246, v550);
    v247 = (_DWORD *)sub_140001650(4, 1);
    if ( !v247 )
      sub_14176E54B(1, 4);
    *v247 = 1701605234;
    v631.m256i_i64[0] = 4;
    v631.m256i_i64[1] = (__int64)v247;
    v631.m256i_i64[2] = 4;
    nullsub_1(v249, v248, v250, v251, v551);
    v252 = sub_140001650(9, 1);
    v627 = (_BYTE *)v252;
    if ( !v252 )
      sub_14176E54B(1, 9);
    *(_QWORD *)v252 = 0x6E61747369737361LL;
    *(_BYTE *)(v252 + 8) = 116;
    v638.m256i_i8[0] = 3;
    v638.m256i_i64[1] = 9;
    v638.m256i_i64[2] = v252;
    v638.m256i_i64[3] = 9;
    sub_1401A27E0(&v636, &v596, &v631, &v638);
    if ( v636.m256i_i8[0] != -1 )
      sub_1401FF690(&v636);
    nullsub_1(v254, v253, v255, v256, v552);
    v257 = (_DWORD *)sub_140001650(7, 1);
    if ( !v257 )
      sub_14176E54B(1, 7);
    *(_DWORD *)((char *)v257 + 3) = 1953391988;
    *v257 = 1953394531;
    *(_QWORD *)&v601 = 7;
    *((_QWORD *)&v601 + 1) = v257;
    v602 = 7;
    nullsub_1(v259, v258, v260, v261, v553);
    v262 = sub_140001650(32, 8);
    if ( !v262 )
    {
      v630 = 1;
      sub_14176E531(8, 32);
    }
    v267 = (_BYTE *)v262;
    *(_QWORD *)&v628 = 0;
    v629 = 0;
    nullsub_1(v264, v263, v265, v266, v554);
    v268 = (_DWORD *)sub_140001650(4, 1);
    v627 = v267;
    if ( !v268 )
      sub_14176E54B(1, 4);
    *v268 = 1701869940;
    v631.m256i_i64[0] = 4;
    v631.m256i_i64[1] = (__int64)v268;
    v631.m256i_i64[2] = 4;
    nullsub_1(v270, v269, v271, v272, v555);
    v273 = (void *)sub_140001650(11, 1);
    v594 = v273;
    if ( !v273 )
      sub_14176E54B(1, 11);
    qmemcpy(v273, "output_text", 11);
    v638.m256i_i8[0] = 3;
    v638.m256i_i64[1] = 11;
    v638.m256i_i64[2] = (__int64)v273;
    v638.m256i_i64[3] = 11;
    sub_1401A27E0(&v636, &v628, &v631, &v638);
    if ( v636.m256i_i8[0] != -1 )
      sub_1401FF690(&v636);
    nullsub_1(v275, v274, v276, v277, v556);
    v278 = 1;
    v279 = (_DWORD *)sub_140001650(4, 1);
    if ( !v279 )
      sub_14176E54B(1, 4);
    *v279 = 1954047348;
    v631.m256i_i64[0] = 4;
    v631.m256i_i64[1] = (__int64)v279;
    v631.m256i_i64[2] = 4;
    if ( v98 )
    {
      nullsub_1(v281, v280, v282, v283, v557);
      v284 = sub_140001650(v98, 1);
      if ( !v284 )
      {
        v605 = 1;
        sub_14176E54B(1, v98);
      }
      v278 = v284;
      sub_14172B820(v284, v595, v98);
    }
    v638.m256i_i8[0] = 3;
    v638.m256i_i64[1] = v98;
    v638.m256i_i64[2] = v278;
    v638.m256i_i64[3] = v98;
    v605 = 0;
    sub_1401A27E0(&v636, &v628, &v631, &v638);
    if ( v636.m256i_i8[0] != -1 )
      sub_1401FF690(&v636);
    nullsub_1(v286, v285, v287, v288, v557);
    v289 = (void *)sub_140001650(11, 1);
    if ( !v289 )
      sub_14176E54B(1, 11);
    qmemcpy(v289, "annotations", 11);
    v631.m256i_i64[0] = 11;
    v631.m256i_i64[1] = (__int64)v289;
    v631.m256i_i64[2] = 11;
    v638.m256i_i64[1] = 0;
    *(_OWORD *)&v638.m256i_u64[2] = 8u;
    v638.m256i_i8[0] = 4;
    sub_1401A27E0(&v636, &v628, &v631, &v638);
    if ( v636.m256i_i8[0] != -1 )
      sub_1401FF690(&v636);
    *(_OWORD *)((char *)&v638.m256i_u32[1] + 3) = v628;
    *(__int64 *)((char *)&v638.m256i_i64[2] + 7) = v629;
    v290 = (__int64)v627;
    *v627 = 5;
    v291 = *(_OWORD *)v638.m256i_i8;
    *(_OWORD *)(v290 + 16) = *(_OWORD *)((char *)&v638.m256i_u64[1] + 7);
    *(_OWORD *)(v290 + 1) = v291;
    v638.m256i_i64[1] = 1;
    v638.m256i_i64[2] = v290;
    v638.m256i_i64[3] = 1;
    v638.m256i_i8[0] = 4;
    v630 = 0;
    sub_1401A27E0(&v636, &v596, &v601, &v638);
    if ( v636.m256i_i8[0] != -1 )
      sub_1401FF690(&v636);
    *(_OWORD *)&v631.m256i_u64[1] = v596;
    v631.m256i_i64[3] = v597;
    v631.m256i_i8[0] = 5;
    *(_QWORD *)&v601 = 0;
    v602 = 0;
    nullsub_1(v293, v292, v294, v295, v558);
    v296 = (_DWORD *)sub_140001650(4, 1);
    if ( !v296 )
      sub_14176E54B(1, 4);
    *v296 = 1701869940;
    *(_QWORD *)&v628 = 4;
    *((_QWORD *)&v628 + 1) = v296;
    v629 = 4;
    nullsub_1(v298, v297, v299, v300, v559);
    v301 = (_BYTE *)sub_140001650(25, 1);
    v627 = v301;
    if ( !v301 )
      sub_14176E54B(1, 25);
    qmemcpy(v301, "response.output_item.done", 25);
    v638.m256i_i8[0] = 3;
    v638.m256i_i64[1] = 25;
    v638.m256i_i64[2] = (__int64)v301;
    v638.m256i_i64[3] = 25;
    sub_1401A27E0(&v636, &v601, &v628, &v638);
    if ( v636.m256i_i8[0] != -1 )
      sub_1401FF690(&v636);
    nullsub_1(v303, v302, v304, v305, v560);
    v306 = (void *)sub_140001650(12, 1);
    if ( !v306 )
      sub_14176E54B(1, 12);
    qmemcpy(v306, "output_index", 12);
    *(_QWORD *)&v628 = 12;
    *((_QWORD *)&v628 + 1) = v306;
    v629 = 12;
    v638.m256i_i8[0] = 2;
    v638.m256i_i64[1] = 0;
    v638.m256i_i64[2] = v21;
    sub_1401A27E0(&v636, &v601, &v628, &v638);
    if ( v636.m256i_i8[0] != -1 )
      sub_1401FF690(&v636);
    nullsub_1(v308, v307, v309, v310, v561);
    v311 = 1;
    v312 = (_DWORD *)sub_140001650(7, 1);
    if ( !v312 )
      sub_14176E54B(1, 7);
    *(_DWORD *)((char *)v312 + 3) = 1684627309;
    *v312 = 1835365481;
    *(_QWORD *)&v628 = 7;
    *((_QWORD *)&v628 + 1) = v312;
    v629 = 7;
    if ( v31 )
    {
      nullsub_1(v314, v313, v315, v316, v562);
      v317 = sub_140001650(v31, 1);
      if ( !v317 )
      {
        v604 = 1;
        sub_14176E54B(1, v31);
      }
      v311 = v317;
      sub_14172B820(v317, v600, v31);
    }
    v638.m256i_i8[0] = 3;
    v638.m256i_i64[1] = v31;
    v638.m256i_i64[2] = v311;
    v638.m256i_i64[3] = v31;
    v604 = 0;
    sub_1401A27E0(&v636, &v601, &v628, &v638);
    if ( v636.m256i_i8[0] != -1 )
      sub_1401FF690(&v636);
    nullsub_1(v319, v318, v320, v321, v562);
    v322 = (_DWORD *)sub_140001650(4, 1);
    if ( !v322 )
      sub_14176E54B(1, 4);
    *v322 = 1835365481;
    *(_QWORD *)&v628 = 4;
    *((_QWORD *)&v628 + 1) = v322;
    v629 = 4;
    v632 = 1;
    sub_1404B9F30(&v638, &v631);
    if ( v638.m256i_i8[0] == -1 )
    {
      v636.m256i_i64[0] = v638.m256i_i64[1];
      sub_14176E860(
        (unsigned int)aCalledResultUn_11,
        43,
        (unsigned int)&v636,
        (unsigned int)&off_14183D550,
        (__int64)&off_14183E6A0);
    }
    v636 = v638;
    v632 = 0;
    sub_1401A27E0(&v638, &v601, &v628, &v636);
    if ( v638.m256i_i8[0] != -1 )
      sub_1401FF690(&v638);
    *(_OWORD *)&v638.m256i_u64[1] = v601;
    v638.m256i_i64[3] = v602;
    v638.m256i_i8[0] = 5;
    sub_14077FD10((unsigned int)&v636, (_DWORD)a1 + 240, (unsigned int)&xmmword_14183DCF8, 25, (__int64)&v638);
    v324 = v636.m256i_i64[2];
    v323 = v636.m256i_i64[1];
    v325 = v603;
    if ( v636.m256i_i64[2] > (unsigned __int64)(*v603 - v211) )
    {
      v627 = (_BYTE *)v636.m256i_i64[1];
      sub_14172C420((_DWORD)v603, v211, v636.m256i_i32[4], 1, 1);
      v325 = v603;
      v211 = v603[2];
      v323 = (__int64)v627;
    }
    else if ( !v636.m256i_i64[2] )
    {
      goto LABEL_187;
    }
    sub_14172B820(v211 + v325[1], v323, v324);
    v325 = v603;
LABEL_187:
    v325[2] = v324 + v211;
    if ( v636.m256i_i64[0] )
      sub_140001660(v323, v636.m256i_i64[0], 1);
    v635 = 1;
    sub_1401FF690(&v638);
    v326 = a1[8];
    if ( v326 == a1[6] )
      sub_14172C8D0(a1 + 6);
    result = a1[7];
    v327 = 32 * v326;
    v328 = *(_OWORD *)v631.m256i_i8;
    *(_OWORD *)(result + v327 + 16) = *(_OWORD *)&v631.m256i_u64[2];
    *(_OWORD *)(result + v327) = v328;
    a1[8] = v326 + 1;
    if ( v623.m256i_i64[0] )
      result = sub_140001660(v600, v623.m256i_i64[0], 1);
    v329 = v623.m256i_i64[3];
    if ( v623.m256i_i64[3] )
    {
      v330 = v595;
      return sub_140001660(v330, v329, 1);
    }
    return result;
  }
  v33 = *(unsigned int *)(a2 + 104);
  v595 = *(_QWORD *)(a2 + 8);
  v600 = *(_QWORD *)(a2 + 16);
  v34 = *(_QWORD *)(a2 + 24);
  v593 = *(_QWORD *)(a2 + 48);
  v592 = *(_OWORD *)(a2 + 32);
  v627 = *(_BYTE **)(a2 + 56);
  v591 = *(_QWORD *)(a2 + 64);
  v35 = *(unsigned __int8 *)(a2 + 108);
  v594 = *(void **)(a2 + 80);
  v590 = *(_QWORD *)(a2 + 88);
  LOBYTE(v598) = v35;
  if ( !(_BYTE)v35 )
  {
    v54 = *(_QWORD *)(a2 + 72);
    v631.m256i_i64[0] = 0;
    v631.m256i_i64[2] = 0;
    nullsub_1(v35, a2, a3, a4, v516);
    v55 = (_DWORD *)sub_140001650(4, 1);
    if ( !v55 )
      sub_14176E54B(1, 4);
    *v55 = 1701869940;
    v636.m256i_i64[0] = 4;
    v636.m256i_i64[1] = (__int64)v55;
    v636.m256i_i64[2] = 4;
    nullsub_1(v57, v56, v58, v59, v524);
    v60 = (void *)sub_140001650(36, 1);
    v626 = (__int64)v60;
    if ( !v60 )
      sub_14176E54B(1, 36);
    qmemcpy(v60, "response.reasoning_summary_text.done", 36);
    v623.m256i_i8[0] = 3;
    v623.m256i_i64[1] = 36;
    v623.m256i_i64[2] = (__int64)v60;
    v623.m256i_i64[3] = 36;
    sub_1401A27E0(&v638, &v631, &v636, &v623);
    if ( v638.m256i_i8[0] != -1 )
      sub_1401FF690(&v638);
    nullsub_1(v62, v61, v63, v64, v525);
    v65 = (void *)sub_140001650(12, 1);
    if ( !v65 )
      sub_14176E54B(1, 12);
    qmemcpy(v65, "output_index", 12);
    v636.m256i_i64[0] = 12;
    v636.m256i_i64[1] = (__int64)v65;
    v636.m256i_i64[2] = 12;
    v623.m256i_i8[0] = 2;
    v623.m256i_i64[1] = 0;
    v623.m256i_i64[2] = v33;
    sub_1401A27E0(&v638, &v631, &v636, &v623);
    if ( v638.m256i_i8[0] != -1 )
      sub_1401FF690(&v638);
    nullsub_1(v67, v66, v68, v69, v526);
    v70 = (_DWORD *)sub_140001650(7, 1);
    if ( !v70 )
      sub_14176E54B(1, 7);
    v75 = (_DWORD)a1 + 240;
    *(_DWORD *)((char *)v70 + 3) = 1684627309;
    *v70 = 1835365481;
    v636.m256i_i64[0] = 7;
    v636.m256i_i64[1] = (__int64)v70;
    v636.m256i_i64[2] = 7;
    if ( v34 < 0 )
    {
      v76 = 0;
      goto LABEL_36;
    }
    v626 = v54;
    if ( v34 )
    {
      nullsub_1(v72, v71, v73, v74, v527);
      v76 = 1;
      v82 = sub_140001650(v34, 1);
      if ( !v82 )
      {
LABEL_36:
        v622 = 1;
        sub_14176E54B(v76, v34);
      }
      v83 = v82;
      sub_14172B820(v82, v600, v34);
      v54 = v626;
    }
    else
    {
      v83 = 1;
    }
    v623.m256i_i8[0] = 3;
    v623.m256i_i64[1] = v34;
    v623.m256i_i64[2] = v83;
    v623.m256i_i64[3] = v34;
    v622 = 0;
    sub_1401A27E0(&v638, &v631, &v636, &v623);
    if ( v638.m256i_i8[0] != -1 )
      sub_1401FF690(&v638);
    nullsub_1(v127, v126, v128, v129, v527);
    v130 = (void *)sub_140001650(13, 1);
    if ( !v130 )
      sub_14176E54B(1, 13);
    qmemcpy(v130, "summary_index", 13);
    v636.m256i_i64[0] = 13;
    v636.m256i_i64[1] = (__int64)v130;
    v636.m256i_i64[2] = 13;
    v623.m256i_i8[0] = 2;
    *(_OWORD *)&v623.m256i_u64[1] = 0;
    sub_1401A27E0(&v638, &v631, &v636, &v623);
    if ( v638.m256i_i8[0] != -1 )
      sub_1401FF690(&v638);
    nullsub_1(v132, v131, v133, v134, v533);
    v135 = (_DWORD *)sub_140001650(4, 1);
    if ( !v135 )
      sub_14176E54B(1, 4);
    *v135 = 1954047348;
    v636.m256i_i64[0] = 4;
    v636.m256i_i64[1] = (__int64)v135;
    v636.m256i_i64[2] = 4;
    if ( v593 < 0 )
    {
      v140 = 0;
      goto LABEL_83;
    }
    if ( v593 )
    {
      nullsub_1(v137, v136, v138, v139, v534);
      v140 = 1;
      v141 = sub_140001650(v593, 1);
      if ( !v141 )
      {
LABEL_83:
        v621 = 1;
        sub_14176E54B(v140, v593);
      }
      v142 = v141;
      sub_14172B820(v141, *((_QWORD *)&v592 + 1), v593);
      v54 = v626;
      v75 = (_DWORD)a1 + 240;
    }
    else
    {
      v142 = 1;
    }
    v623.m256i_i8[0] = 3;
    v623.m256i_i64[1] = v593;
    v623.m256i_i64[2] = v142;
    v623.m256i_i64[3] = v593;
    v621 = 0;
    sub_1401A27E0(&v638, &v631, &v636, &v623);
    if ( v638.m256i_i8[0] != -1 )
      sub_1401FF690(&v638);
    *(_OWORD *)&v623.m256i_u64[1] = *(_OWORD *)v631.m256i_i8;
    v623.m256i_i64[3] = v631.m256i_i64[2];
    v623.m256i_i8[0] = 5;
    sub_14077FD10((unsigned int)&v638, v75, (unsigned int)&xmmword_14183DF00, 36, (__int64)&v623);
    v413 = v638.m256i_i64[2];
    v599 = v638.m256i_i64[1];
    v414 = v603;
    v415 = v603[2];
    if ( v638.m256i_i64[2] > (unsigned __int64)(*v603 - v415) )
    {
      sub_14172C420((_DWORD)v603, v415, v638.m256i_i32[4], 1, 1);
      v414 = v603;
      v415 = v603[2];
      v54 = v626;
    }
    else if ( !v638.m256i_i64[2] )
    {
      goto LABEL_258;
    }
    sub_14172B820(v415 + v414[1], v599, v413);
    v414 = v603;
LABEL_258:
    v416 = v413 + v415;
    v414[2] = v416;
    if ( v638.m256i_i64[0] )
      sub_140001660(v599, v638.m256i_i64[0], 1);
    sub_1401FF690(&v623);
    *(_QWORD *)&v601 = 0;
    v602 = 0;
    nullsub_1(v418, v417, v419, v420, v573);
    v421 = (_DWORD *)sub_140001650(4, 1);
    if ( !v421 )
      sub_14176E54B(1, 4);
    *v421 = 1701869940;
    v636.m256i_i64[0] = 4;
    v636.m256i_i64[1] = (__int64)v421;
    v636.m256i_i64[2] = 4;
    nullsub_1(v423, v422, v424, v425, v574);
    v599 = sub_140001650(36, 1);
    if ( !v599 )
      sub_14176E54B(1, 36);
    v426 = v599;
    *(_OWORD *)(v599 + 16) = *(_OWORD *)"ng_summary_part.done";
    *(_OWORD *)v426 = *(_OWORD *)"response.reasoning_summary_part.done";
    *(_DWORD *)(v426 + 32) = 1701736292;
    v623.m256i_i8[0] = 3;
    v623.m256i_i64[1] = 36;
    v623.m256i_i64[2] = v426;
    v623.m256i_i64[3] = 36;
    sub_1401A27E0(&v638, &v601, &v636, &v623);
    if ( v638.m256i_i8[0] != -1 )
      sub_1401FF690(&v638);
    nullsub_1(v428, v427, v429, v430, v575);
    v431 = (void *)sub_140001650(12, 1);
    if ( !v431 )
      sub_14176E54B(1, 12);
    qmemcpy(v431, "output_index", 12);
    v636.m256i_i64[0] = 12;
    v636.m256i_i64[1] = (__int64)v431;
    v636.m256i_i64[2] = 12;
    v623.m256i_i8[0] = 2;
    v623.m256i_i64[1] = 0;
    v623.m256i_i64[2] = v33;
    sub_1401A27E0(&v638, &v601, &v636, &v623);
    if ( v638.m256i_i8[0] != -1 )
      sub_1401FF690(&v638);
    nullsub_1(v433, v432, v434, v435, v576);
    v436 = 1;
    v437 = (_DWORD *)sub_140001650(7, 1);
    if ( !v437 )
      sub_14176E54B(1, 7);
    *(_DWORD *)((char *)v437 + 3) = 1684627309;
    *v437 = 1835365481;
    v636.m256i_i64[0] = 7;
    v636.m256i_i64[1] = (__int64)v437;
    v636.m256i_i64[2] = 7;
    if ( v34 )
    {
      nullsub_1(v439, v438, v440, v441, v577);
      v442 = sub_140001650(v34, 1);
      if ( !v442 )
      {
        v620 = 1;
        sub_14176E54B(1, v34);
      }
      v436 = v442;
      sub_14172B820(v442, v600, v34);
    }
    v623.m256i_i8[0] = 3;
    v623.m256i_i64[1] = v34;
    v623.m256i_i64[2] = v436;
    v623.m256i_i64[3] = v34;
    v620 = 0;
    sub_1401A27E0(&v638, &v601, &v636, &v623);
    if ( v638.m256i_i8[0] != -1 )
      sub_1401FF690(&v638);
    nullsub_1(v444, v443, v445, v446, v577);
    v447 = (void *)sub_140001650(13, 1);
    if ( !v447 )
      sub_14176E54B(1, 13);
    qmemcpy(v447, "summary_index", 13);
    v636.m256i_i64[0] = 13;
    v636.m256i_i64[1] = (__int64)v447;
    v636.m256i_i64[2] = 13;
    v623.m256i_i8[0] = 2;
    *(_OWORD *)&v623.m256i_u64[1] = 0;
    sub_1401A27E0(&v638, &v601, &v636, &v623);
    if ( v638.m256i_i8[0] != -1 )
      sub_1401FF690(&v638);
    nullsub_1(v449, v448, v450, v451, v578);
    v452 = (_DWORD *)sub_140001650(4, 1);
    if ( !v452 )
      sub_14176E54B(1, 4);
    *v452 = 1953653104;
    *(_QWORD *)&v628 = 4;
    *((_QWORD *)&v628 + 1) = v452;
    v629 = 4;
    v631.m256i_i64[0] = 0;
    v631.m256i_i64[2] = 0;
    nullsub_1(v454, v453, v455, v456, v579);
    v457 = (_DWORD *)sub_140001650(4, 1);
    if ( !v457 )
      sub_14176E54B(1, 4);
    *v457 = 1701869940;
    v636.m256i_i64[0] = 4;
    v636.m256i_i64[1] = (__int64)v457;
    v636.m256i_i64[2] = 4;
    nullsub_1(v459, v458, v460, v461, v580);
    v462 = (void *)sub_140001650(12, 1);
    v599 = (__int64)v462;
    if ( !v462 )
      sub_14176E54B(1, 12);
    qmemcpy(v462, "summary_text", 12);
    v623.m256i_i8[0] = 3;
    v623.m256i_i64[1] = 12;
    v623.m256i_i64[2] = (__int64)v462;
    v623.m256i_i64[3] = 12;
    sub_1401A27E0(&v638, &v631, &v636, &v623);
    if ( v638.m256i_i8[0] != -1 )
      sub_1401FF690(&v638);
    nullsub_1(v464, v463, v465, v466, v581);
    v467 = (_DWORD *)sub_140001650(4, 1);
    if ( !v467 )
      sub_14176E54B(1, 4);
    *v467 = 1954047348;
    v636.m256i_i64[0] = 4;
    v636.m256i_i64[1] = (__int64)v467;
    v636.m256i_i64[2] = 4;
    if ( v593 < 0 )
    {
      v472 = 0;
      goto LABEL_284;
    }
    v599 = v33;
    if ( v593 )
    {
      nullsub_1(v469, v468, v470, v471, v582);
      v472 = 1;
      v473 = sub_140001650(v593, 1);
      if ( !v473 )
      {
LABEL_284:
        v619 = 1;
        sub_14176E54B(v472, v593);
      }
      v474 = v473;
      sub_14172B820(v473, *((_QWORD *)&v592 + 1), v593);
      v54 = v626;
      v75 = (_DWORD)a1 + 240;
    }
    else
    {
      v474 = 1;
    }
    v623.m256i_i8[0] = 3;
    v623.m256i_i64[1] = v593;
    v623.m256i_i64[2] = v474;
    v623.m256i_i64[3] = v593;
    v619 = 0;
    sub_1401A27E0(&v638, &v631, &v636, &v623);
    if ( v638.m256i_i8[0] != -1 )
      sub_1401FF690(&v638);
    *(_OWORD *)&v623.m256i_u64[1] = *(_OWORD *)v631.m256i_i8;
    v623.m256i_i64[3] = v631.m256i_i64[2];
    v623.m256i_i8[0] = 5;
    v618 = 0;
    sub_1401A27E0(&v638, &v601, &v628, &v623);
    if ( v638.m256i_i8[0] != -1 )
      sub_1401FF690(&v638);
    *(_OWORD *)&v623.m256i_u64[1] = v601;
    v623.m256i_i64[3] = v602;
    v623.m256i_i8[0] = 5;
    sub_14077FD10((unsigned int)&v638, v75, (unsigned int)"response.reasoning_summary_part.done", 36, (__int64)&v623);
    v476 = v638.m256i_i64[2];
    v475 = v638.m256i_i64[1];
    v477 = v603;
    if ( v638.m256i_i64[2] > (unsigned __int64)(*v603 - v416) )
    {
      v589 = v638.m256i_i64[1];
      sub_14172C420((_DWORD)v603, v416, v638.m256i_i32[4], 1, 1);
      v477 = v603;
      v416 = v603[2];
      v54 = v626;
      v475 = v589;
    }
    else if ( !v638.m256i_i64[2] )
    {
      goto LABEL_296;
    }
    sub_14172B820(v416 + v477[1], v475, v476);
    v477 = v603;
LABEL_296:
    v477[2] = v476 + v416;
    if ( v638.m256i_i64[0] )
      sub_140001660(v475, v638.m256i_i64[0], 1);
    sub_1401FF690(&v623);
    *(_QWORD *)&v601 = 0;
    v602 = 0;
    nullsub_1(v479, v478, v480, v481, v583);
    v482 = (_DWORD *)sub_140001650(4, 1);
    if ( !v482 )
      sub_14176E54B(1, 4);
    *v482 = 1701869940;
    v636.m256i_i64[0] = 4;
    v636.m256i_i64[1] = (__int64)v482;
    v636.m256i_i64[2] = 4;
    nullsub_1(v484, v483, v485, v486, v584);
    v487 = (_QWORD *)sub_140001650(8, 1);
    v626 = (__int64)v487;
    if ( !v487 )
      sub_14176E54B(1, 8);
    *v487 = 0x676E696B6E696874LL;
    v623.m256i_i8[0] = 3;
    v623.m256i_i64[1] = 8;
    v623.m256i_i64[2] = (__int64)v487;
    v623.m256i_i64[3] = 8;
    sub_1401A27E0(&v638, &v601, &v636, &v623);
    if ( v638.m256i_i8[0] != -1 )
      sub_1401FF690(&v638);
    nullsub_1(v489, v488, v490, v491, v585);
    v492 = (_QWORD *)sub_140001650(8, 1);
    if ( !v492 )
      sub_14176E54B(1, 8);
    *v492 = 0x676E696B6E696874LL;
    *(_QWORD *)&v628 = 8;
    v626 = (__int64)v492;
    *((_QWORD *)&v628 + 1) = v492;
    v629 = 8;
    sub_141543F00(&v636, &v592);
    v497 = *(_OWORD *)&v636.m256i_u64[1];
    v626 = v636.m256i_i64[1];
    if ( v636.m256i_i64[2] < 0 )
    {
      v498 = 0;
      goto LABEL_305;
    }
    if ( v636.m256i_i64[2] )
    {
      nullsub_1(v494, v493, v495, v496, v586);
      v498 = 1;
      v499 = sub_140001650(*((_QWORD *)&v497 + 1), 1);
      if ( !v499 )
      {
LABEL_305:
        v617 = 1;
        sub_14176E54B(v498, *((_QWORD *)&v497 + 1));
      }
      v500 = v499;
      sub_14172B820(v499, v497, *((_QWORD *)&v497 + 1));
    }
    else
    {
      v500 = 1;
    }
    v623.m256i_i8[0] = 3;
    v623.m256i_i64[1] = *((_QWORD *)&v497 + 1);
    v623.m256i_i64[2] = v500;
    v623.m256i_i64[3] = *((_QWORD *)&v497 + 1);
    v617 = 0;
    sub_1401A27E0(&v638, &v601, &v628, &v623);
    if ( v638.m256i_i8[0] != -1 )
      sub_1401FF690(&v638);
    v507 = v636.m256i_i64[0];
    if ( v636.m256i_i64[0] )
      sub_140001660(v626, v636.m256i_i64[0], 1);
    nullsub_1(v504, v507, v505, v506, v586);
    v508 = sub_140001650(9, 1);
    if ( !v508 )
      sub_14176E54B(1, 9);
    *(_QWORD *)v508 = 0x727574616E676973LL;
    *(_BYTE *)(v508 + 8) = 101;
    v636.m256i_i64[0] = 9;
    v636.m256i_i64[1] = v508;
    v636.m256i_i64[2] = 9;
    if ( v54 < 0 )
    {
      v512 = 0;
      goto LABEL_320;
    }
    if ( v54 )
    {
      nullsub_1(0x727574616E676973LL, v509, v510, v511, v523);
      v512 = 1;
      v513 = sub_140001650(v54, 1);
      if ( !v513 )
      {
LABEL_320:
        v616 = 1;
        sub_14176E54B(v512, v54);
      }
      v514 = v513;
      sub_14172B820(v513, v591, v54);
    }
    else
    {
      v514 = 1;
    }
    v623.m256i_i8[0] = 3;
    v623.m256i_i64[1] = v54;
    v623.m256i_i64[2] = v514;
    v623.m256i_i64[3] = v54;
    v616 = 0;
    sub_1401A27E0(&v638, &v601, &v636, &v623);
    v106 = v599;
    if ( v638.m256i_i8[0] != -1 )
      sub_1401FF690(&v638);
    *(_OWORD *)&v631.m256i_u64[1] = v601;
    v107 = v602;
    goto LABEL_63;
  }
  v36 = *(_QWORD *)(a2 + 96);
  *(_QWORD *)&v628 = 0;
  v629 = 0;
  nullsub_1(v35, a2, a3, a4, v516);
  v37 = (_DWORD *)sub_140001650(4, 1);
  if ( !v37 )
    sub_14176E54B(1, 4);
  *v37 = 1701869940;
  v636.m256i_i64[0] = 4;
  v636.m256i_i64[1] = (__int64)v37;
  v636.m256i_i64[2] = 4;
  nullsub_1(v39, v38, v40, v41, v521);
  v42 = (void *)sub_140001650(17, 1);
  v626 = (__int64)v42;
  if ( !v42 )
    sub_14176E54B(1, 17);
  qmemcpy(v42, "redacted_thinking", 17);
  v623.m256i_i8[0] = 3;
  v623.m256i_i64[1] = 17;
  v623.m256i_i64[2] = (__int64)v42;
  v623.m256i_i64[3] = 17;
  sub_1401A27E0(&v638, &v628, &v636, &v623);
  if ( v638.m256i_i8[0] != -1 )
    sub_1401FF690(&v638);
  nullsub_1(v44, v43, v45, v46, v522);
  v47 = (_DWORD *)sub_140001650(4, 1);
  if ( !v47 )
    sub_14176E54B(1, 4);
  *v47 = 1635017060;
  v636.m256i_i64[0] = 4;
  v636.m256i_i64[1] = (__int64)v47;
  v636.m256i_i64[2] = 4;
  if ( v36 < 0 )
  {
    v52 = 0;
    goto LABEL_24;
  }
  v79 = v33;
  if ( v36 )
  {
    nullsub_1(v49, v48, v50, v51, v523);
    v52 = 1;
    v80 = sub_140001650(v36, 1);
    if ( !v80 )
    {
LABEL_24:
      v615 = 1;
      sub_14176E54B(v52, v36);
    }
    v81 = v80;
    sub_14172B820(v80, v590, v36);
  }
  else
  {
    v81 = 1;
  }
  v623.m256i_i8[0] = 3;
  v623.m256i_i64[1] = v36;
  v623.m256i_i64[2] = v81;
  v623.m256i_i64[3] = v36;
  v615 = 0;
  sub_1401A27E0(&v638, &v628, &v636, &v623);
  v106 = v79;
  if ( v638.m256i_i8[0] != -1 )
    sub_1401FF690(&v638);
  *(_OWORD *)&v631.m256i_u64[1] = v628;
  v107 = v629;
LABEL_63:
  v631.m256i_i64[3] = v107;
  v631.m256i_i8[0] = 5;
  *(_QWORD *)&v587 = 0;
  v588 = 0;
  nullsub_1(v103, v102, v104, v105, v523);
  v108 = (_DWORD *)sub_140001650(4, 1);
  if ( !v108 )
    sub_14176E54B(1, 4);
  *v108 = 1701869940;
  v636.m256i_i64[0] = 4;
  v636.m256i_i64[1] = (__int64)v108;
  v636.m256i_i64[2] = 4;
  nullsub_1(v110, v109, v111, v112, v530);
  v113 = sub_140001650(9, 1);
  v626 = v113;
  if ( !v113 )
    sub_14176E54B(1, 9);
  *(_QWORD *)v113 = 0x6E696E6F73616572LL;
  *(_BYTE *)(v113 + 8) = 103;
  v623.m256i_i8[0] = 3;
  v623.m256i_i64[1] = 9;
  v623.m256i_i64[2] = v113;
  v623.m256i_i64[3] = 9;
  sub_1401A27E0(&v638, &v587, &v636, &v623);
  if ( v638.m256i_i8[0] != -1 )
    sub_1401FF690(&v638);
  nullsub_1(v115, v114, v116, v117, v531);
  v118 = (_WORD *)sub_140001650(2, 1);
  if ( !v118 )
    sub_14176E54B(1, 2);
  *v118 = 25705;
  v636.m256i_i64[0] = 2;
  v636.m256i_i64[1] = (__int64)v118;
  v636.m256i_i64[2] = 2;
  if ( v34 < 0 )
  {
    v123 = 0;
    goto LABEL_70;
  }
  if ( v34 )
  {
    nullsub_1(v120, v119, v121, v122, v532);
    v123 = 1;
    v124 = sub_140001650(v34, 1);
    if ( !v124 )
    {
LABEL_70:
      v614 = 1;
      sub_14176E54B(v123, v34);
    }
    v125 = v124;
    sub_14172B820(v124, v600, v34);
  }
  else
  {
    v125 = 1;
  }
  v623.m256i_i8[0] = 3;
  v623.m256i_i64[1] = v34;
  v623.m256i_i64[2] = v125;
  v623.m256i_i64[3] = v34;
  v614 = 0;
  sub_1401A27E0(&v638, &v587, &v636, &v623);
  if ( v638.m256i_i8[0] != -1 )
    sub_1401FF690(&v638);
  nullsub_1(v332, v331, v333, v334, v532);
  v335 = sub_140001650(6, 1);
  if ( !v335 )
    sub_14176E54B(1, 6);
  *(_WORD *)(v335 + 4) = 29557;
  *(_DWORD *)v335 = 1952543859;
  v636.m256i_i64[0] = 6;
  v636.m256i_i64[1] = v335;
  v636.m256i_i64[2] = 6;
  nullsub_1(v337, v336, v338, v339, v563);
  v340 = sub_140001650(9, 1);
  v626 = v340;
  if ( !v340 )
    sub_14176E54B(1, 9);
  *(_QWORD *)v340 = 0x6574656C706D6F63LL;
  *(_BYTE *)(v340 + 8) = 100;
  v623.m256i_i8[0] = 3;
  v623.m256i_i64[1] = 9;
  v623.m256i_i64[2] = v340;
  v623.m256i_i64[3] = 9;
  sub_1401A27E0(&v638, &v587, &v636, &v623);
  if ( v638.m256i_i8[0] != -1 )
    sub_1401FF690(&v638);
  nullsub_1(v342, v341, v343, v344, v564);
  v345 = (_DWORD *)sub_140001650(7, 1);
  if ( !v345 )
    sub_14176E54B(1, 7);
  *(_DWORD *)((char *)v345 + 3) = 2037539181;
  *v345 = 1835890035;
  *(_QWORD *)&v596 = 7;
  *((_QWORD *)&v596 + 1) = v345;
  v597 = 7;
  *((_QWORD *)&v349 + 1) = 8;
  if ( (_BYTE)v598 || !v593 )
  {
    *(_QWORD *)&v349 = 0;
  }
  else
  {
    v350 = v345;
    nullsub_1(v346, 8, v347, v348, v565);
    v351 = sub_140001650(32, 8);
    v599 = (__int64)v350;
    if ( !v351 )
      sub_14176E531(8, 32);
    v356 = (_BYTE *)v351;
    *(_QWORD *)&v601 = 0;
    v602 = 0;
    nullsub_1(v353, v352, v354, v355, v566);
    v357 = (_DWORD *)sub_140001650(4, 1);
    v598 = v356;
    if ( !v357 )
      sub_14176E54B(1, 4);
    *v357 = 1701869940;
    v636.m256i_i64[0] = 4;
    v636.m256i_i64[1] = (__int64)v357;
    v636.m256i_i64[2] = 4;
    nullsub_1(v359, v358, v360, v361, v567);
    v362 = (void *)sub_140001650(12, 1);
    v626 = (__int64)v362;
    if ( !v362 )
      sub_14176E54B(1, 12);
    qmemcpy(v362, "summary_text", 12);
    v623.m256i_i8[0] = 3;
    v623.m256i_i64[1] = 12;
    v623.m256i_i64[2] = (__int64)v362;
    v623.m256i_i64[3] = 12;
    sub_1401A27E0(&v638, &v601, &v636, &v623);
    if ( v638.m256i_i8[0] != -1 )
      sub_1401FF690(&v638);
    nullsub_1(v364, v363, v365, v366, v568);
    v367 = (_DWORD *)sub_140001650(4, 1);
    if ( !v367 )
      sub_14176E54B(1, 4);
    *v367 = 1954047348;
    *(_QWORD *)&v628 = 4;
    v626 = (__int64)v367;
    *((_QWORD *)&v628 + 1) = v367;
    v629 = 4;
    sub_141543F00(&v636, &v592);
    v372 = *(_OWORD *)&v636.m256i_u64[1];
    v626 = v636.m256i_i64[1];
    if ( v636.m256i_i64[2] < 0 )
    {
      v373 = 0;
      goto LABEL_213;
    }
    v501 = v106;
    if ( v636.m256i_i64[2] )
    {
      nullsub_1(v369, v368, v370, v371, v565);
      v373 = 1;
      v502 = sub_140001650(*((_QWORD *)&v372 + 1), 1);
      if ( !v502 )
      {
LABEL_213:
        v613 = 1;
        sub_14176E54B(v373, *((_QWORD *)&v372 + 1));
      }
      v503 = v502;
      sub_14172B820(v502, v372, *((_QWORD *)&v372 + 1));
    }
    else
    {
      v503 = 1;
    }
    v623.m256i_i8[0] = 3;
    v623.m256i_i64[1] = *((_QWORD *)&v372 + 1);
    v623.m256i_i64[2] = v503;
    v623.m256i_i64[3] = *((_QWORD *)&v372 + 1);
    v613 = 0;
    sub_1401A27E0(&v638, &v601, &v628, &v623);
    v106 = v501;
    if ( v638.m256i_i8[0] != -1 )
      sub_1401FF690(&v638);
    if ( v636.m256i_i64[0] )
      sub_140001660(v626, v636.m256i_i64[0], 1);
    *(_OWORD *)((char *)&v623.m256i_u32[1] + 3) = v601;
    *(__int64 *)((char *)&v623.m256i_i64[2] + 7) = v602;
    *((_QWORD *)&v349 + 1) = v598;
    *v598 = 5;
    *(_QWORD *)&v349 = *(__int64 *)((char *)&v623.m256i_i64[1] + 7);
    v515 = *(__int64 *)((char *)&v623.m256i_i64[2] + 7);
    *(_OWORD *)(*((_QWORD *)&v349 + 1) + 1LL) = *(_OWORD *)v623.m256i_i8;
    *(_QWORD *)(*((_QWORD *)&v349 + 1) + 16LL) = v349;
    *(_QWORD *)(*((_QWORD *)&v349 + 1) + 24LL) = v515;
    *(_QWORD *)&v349 = 1;
  }
  *(_OWORD *)&v623.m256i_u64[1] = v349;
  v623.m256i_i64[3] = v349;
  v623.m256i_i8[0] = 4;
  v634 = 1;
  sub_1404B9F30(&v638, &v623);
  if ( v638.m256i_i8[0] == -1 )
  {
    v636.m256i_i64[0] = v638.m256i_i64[1];
    sub_14176E860(
      (unsigned int)aCalledResultUn_11,
      43,
      (unsigned int)&v636,
      (unsigned int)&off_14183D550,
      (__int64)&off_14183E670);
  }
  v636 = v638;
  v634 = 0;
  sub_1401A27E0(&v638, &v587, &v596, &v636);
  if ( v638.m256i_i8[0] != -1 )
    sub_1401FF690(&v638);
  sub_1401FF690(&v623);
  *(_OWORD *)&v636.m256i_u64[1] = v587;
  v636.m256i_i64[3] = v588;
  v636.m256i_i8[0] = 5;
  v637 = 1;
  set_anthropic_thinking_carrier((__int64)&v636, (__int64)&v631);
  *(_QWORD *)&v601 = 0;
  v602 = 0;
  nullsub_1(v375, v374, v376, v377, v565);
  v378 = (_DWORD *)sub_140001650(4, 1);
  if ( !v378 )
    sub_14176E54B(1, 4);
  *v378 = 1701869940;
  *(_QWORD *)&v628 = 4;
  *((_QWORD *)&v628 + 1) = v378;
  v629 = 4;
  nullsub_1(v380, v379, v381, v382, v569);
  v383 = (_BYTE *)sub_140001650(25, 1);
  v598 = v383;
  if ( !v383 )
    sub_14176E54B(1, 25);
  qmemcpy(v383, "response.output_item.done", 25);
  v623.m256i_i8[0] = 3;
  v623.m256i_i64[1] = 25;
  v623.m256i_i64[2] = (__int64)v383;
  v623.m256i_i64[3] = 25;
  sub_1401A27E0(&v638, &v601, &v628, &v623);
  if ( v638.m256i_i8[0] != -1 )
    sub_1401FF690(&v638);
  nullsub_1(v385, v384, v386, v387, v570);
  v388 = (void *)sub_140001650(12, 1);
  if ( !v388 )
    sub_14176E54B(1, 12);
  qmemcpy(v388, "output_index", 12);
  *(_QWORD *)&v628 = 12;
  *((_QWORD *)&v628 + 1) = v388;
  v629 = 12;
  v623.m256i_i8[0] = 2;
  v623.m256i_i64[1] = 0;
  v623.m256i_i64[2] = v106;
  sub_1401A27E0(&v638, &v601, &v628, &v623);
  if ( v638.m256i_i8[0] != -1 )
    sub_1401FF690(&v638);
  nullsub_1(v390, v389, v391, v392, v571);
  v393 = 1;
  v394 = (_DWORD *)sub_140001650(7, 1);
  if ( !v394 )
    sub_14176E54B(1, 7);
  *(_DWORD *)((char *)v394 + 3) = 1684627309;
  *v394 = 1835365481;
  *(_QWORD *)&v628 = 7;
  *((_QWORD *)&v628 + 1) = v394;
  v629 = 7;
  if ( v34 )
  {
    nullsub_1(v396, v395, v397, v398, v572);
    v399 = sub_140001650(v34, 1);
    if ( !v399 )
    {
      v612 = 1;
      sub_14176E54B(1, v34);
    }
    v393 = v399;
    sub_14172B820(v399, v600, v34);
  }
  v623.m256i_i8[0] = 3;
  v623.m256i_i64[1] = v34;
  v623.m256i_i64[2] = v393;
  v623.m256i_i64[3] = v34;
  v612 = 0;
  sub_1401A27E0(&v638, &v601, &v628, &v623);
  if ( v638.m256i_i8[0] != -1 )
    sub_1401FF690(&v638);
  nullsub_1(v401, v400, v402, v403, v572);
  v404 = (_DWORD *)sub_140001650(4, 1);
  if ( !v404 )
    sub_14176E54B(1, 4);
  *v404 = 1835365481;
  *(_QWORD *)&v628 = 4;
  *((_QWORD *)&v628 + 1) = v404;
  v629 = 4;
  v633 = 1;
  sub_1404B9F30(&v623, &v636);
  if ( v623.m256i_i8[0] == -1 )
  {
    v638.m256i_i64[0] = v623.m256i_i64[1];
    sub_14176E860(
      (unsigned int)aCalledResultUn_11,
      43,
      (unsigned int)&v638,
      (unsigned int)&off_14183D550,
      (__int64)&off_14183E688);
  }
  v638 = v623;
  v633 = 0;
  sub_1401A27E0(&v623, &v601, &v628, &v638);
  if ( v623.m256i_i8[0] != -1 )
    sub_1401FF690(&v623);
  *(_OWORD *)&v623.m256i_u64[1] = v601;
  v623.m256i_i64[3] = v602;
  v623.m256i_i8[0] = 5;
  sub_14077FD10((unsigned int)&v638, (_DWORD)a1 + 240, (unsigned int)&xmmword_14183DCF8, 25, (__int64)&v623);
  v405 = v638.m256i_i64[2];
  v406 = v638.m256i_i64[1];
  v407 = v603;
  v408 = v603[2];
  if ( v638.m256i_i64[2] > (unsigned __int64)(*v603 - v408) )
  {
    v598 = (_BYTE *)v638.m256i_i64[1];
    sub_14172C420((_DWORD)v603, v408, v638.m256i_i32[4], 1, 1);
    v407 = v603;
    v408 = v603[2];
    v406 = (__int64)v598;
  }
  else if ( !v638.m256i_i64[2] )
  {
    goto LABEL_238;
  }
  sub_14172B820(v408 + v407[1], v406, v405);
  v407 = v603;
LABEL_238:
  v407[2] = v405 + v408;
  if ( v638.m256i_i64[0] )
    sub_140001660(v406, v638.m256i_i64[0], 1);
  v637 = 1;
  sub_1401FF690(&v623);
  v623 = v636;
  v409 = a1[8];
  if ( v409 == a1[6] )
    sub_14172C8D0(a1 + 6);
  v410 = a1[7];
  v411 = 32 * v409;
  v412 = *(_OWORD *)v623.m256i_i8;
  *(_OWORD *)(v410 + v411 + 16) = *(_OWORD *)&v623.m256i_u64[2];
  *(_OWORD *)(v410 + v411) = v412;
  a1[8] = v409 + 1;
  result = sub_1401FF690(&v631);
  if ( v594 )
    result = sub_140001660(v590, v594, 1);
  if ( v627 )
    result = sub_140001660(v591, v627, 1);
  if ( (_QWORD)v592 )
    result = sub_140001660(*((_QWORD *)&v592 + 1), v592, 1);
  v329 = v595;
  if ( v595 )
  {
    v330 = v600;
    return sub_140001660(v330, v329, 1);
  }
  return result;
}
