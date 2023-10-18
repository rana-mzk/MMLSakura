; Title: 20230421
; Composer: rana
; Maker: Sound Escape
; Programer: rana

	.bank	0
	.if TOTAL_SONGS > 1
song_addr_table:
	dw	song_000_track_table
	.if (ALLOW_BANK_SWITCH)
song_bank_table:
	dw	song_000_bank_table
	.endif ; ALLOW_BANK_SWITCH
	.endif ; TOTAL_SONGS > 1
song_000_track_table:
	dw	song_000_00
	dw	song_000_01
	dw	song_000_02
	dw	song_000_03
	dw	song_000_04
	dw	song_000_06
	dw	song_000_07
	dw	song_000_08
	dw	song_000_09
	dw	song_000_10
	dw	song_000_11
	.if (ALLOW_BANK_SWITCH)
song_000_bank_table:
	db	bank(song_000_00)*2
	db	bank(song_000_01)*2
	db	bank(song_000_02)*2
	db	bank(song_000_03)*2
	db	bank(song_000_04)*2
	db	bank(song_000_06)*2
	db	bank(song_000_07)*2
	db	bank(song_000_08)*2
	db	bank(song_000_09)*2
	db	bank(song_000_10)*2
	db	bank(song_000_11)*2
	.endif

song_000_00:	;Trk A
	db	$ee
	db	bank(song_000_00_bnk001)*2
	dw	song_000_00_bnk001

	.bank	1
	.org	$a000
song_000_00_bnk001:

song_000_00_lp:
	db	$fd,$8f,$fd,$03,$fe,$82,$fc,$67	;Trk A; 20230421.mml: 26
	db	$ee
	db	bank(song_000_00_lp)*2
	dw	song_000_00_lp


song_000_01:	;Trk B

song_000_01_lp:
	db	$fd,$8f,$fd,$00,$fc,$67,$ee
	db	bank(song_000_01_lp)*2
	dw	song_000_01_lp


song_000_02:	;Trk C
	db	$fe,$8f
song_000_02_lp:
	db	$fd,$8f,$fc,$67,$ee
	db	bank(song_000_02_lp)*2
	dw	song_000_02_lp


song_000_03:	;Trk D
	db	$fe,$8f
song_000_03_lp:
	db	$fd,$8f,$fd,$66,$4b,$0d,$fd,$64	;Trk D; 20230421.mml: 26
	db	$44,$0d,$fd,$67,$45,$0d,$fd,$64	;Trk D; 20230421.mml: 31
	db	$44,$0c,$fd,$66,$4b,$0d,$fd,$64	;Trk D; 20230421.mml: 31
	db	$44,$0d,$fd,$67,$45,$0d,$fd,$64	;Trk D; 20230421.mml: 31
	db	$44,$0d,$fd,$66,$4b,$0d,$fd,$64	;Trk D; 20230421.mml: 31
	db	$44,$0d,$fd,$67,$45,$0c,$fd,$64	;Trk D; 20230421.mml: 31
	db	$44,$0d,$fd,$66,$4b,$0d,$fd,$64	;Trk D; 20230421.mml: 31
	db	$44,$0d,$fd,$67,$45,$0d,$fd,$64	;Trk D; 20230421.mml: 31
	db	$44,$0d,$fd,$66,$4b,$0d,$fd,$64	;Trk D; 20230421.mml: 31
	db	$44,$0c,$fd,$67,$45,$0d,$fd,$64	;Trk D; 20230421.mml: 31
	db	$44,$0d,$fd,$66,$4b,$0d,$fd,$64	;Trk D; 20230421.mml: 31
	db	$44,$0d,$fd,$67,$45,$0d,$fd,$64	;Trk D; 20230421.mml: 31
	db	$44,$0d,$fd,$66,$4b,$0c,$fd,$64	;Trk D; 20230421.mml: 31
	db	$44,$0d,$fd,$67,$45,$0d,$fd,$64	;Trk D; 20230421.mml: 31
	db	$44,$0d,$fd,$66,$4b,$0d,$fd,$64	;Trk D; 20230421.mml: 31
	db	$44,$0d,$fd,$67,$45,$0d,$45,$06	;Trk D; 20230421.mml: 32
	db	$45,$06,$fd,$66,$4b,$0d,$fd,$64	;Trk D; 20230421.mml: 32
	db	$44,$0d,$fd,$67,$45,$0d,$fd,$64	;Trk D; 20230421.mml: 33
	db	$44,$0d,$fd,$66,$4b,$0d,$fd,$64	;Trk D; 20230421.mml: 33
	db	$44,$0d,$fd,$67,$45,$0c,$fd,$64	;Trk D; 20230421.mml: 33
	db	$44,$0d,$fd,$66,$4b,$0d,$fd,$64	;Trk D; 20230421.mml: 33
	db	$44,$0d,$fd,$67,$45,$0d,$fd,$64	;Trk D; 20230421.mml: 33
	db	$44,$0d,$fd,$66,$4b,$0d,$fd,$64	;Trk D; 20230421.mml: 33
	db	$44,$0c,$fd,$67,$45,$0d,$fd,$64	;Trk D; 20230421.mml: 33
	db	$44,$0d,$fd,$66,$4b,$0d,$fd,$64	;Trk D; 20230421.mml: 33
	db	$44,$0d,$fd,$67,$45,$0d,$fd,$64	;Trk D; 20230421.mml: 33
	db	$44,$0d,$fd,$66,$4b,$0c,$fd,$64	;Trk D; 20230421.mml: 33
	db	$44,$0d,$fd,$67,$45,$0d,$fd,$64	;Trk D; 20230421.mml: 33
	db	$44,$0d,$fd,$66,$4b,$0d,$fd,$64	;Trk D; 20230421.mml: 33
	db	$44,$0d,$fd,$67,$45,$0d,$fd,$64	;Trk D; 20230421.mml: 33
	db	$44,$0c,$fd,$66,$4b,$0d,$fd,$64	;Trk D; 20230421.mml: 33
	db	$44,$0d,$fd,$67,$45,$0d,$45,$06	;Trk D; 20230421.mml: 34
	db	$45,$07,$ee
	db	bank(song_000_03_lp)*2
	dw	song_000_03_lp


song_000_04:	;Trk E

song_000_04_lp:
	db	$fc,$ff,$ee
	db	bank(song_000_04_lp)*2
	dw	song_000_04_lp


song_000_06:	;Trk G

song_000_06_lp:
	db	$fd,$8f,$fd,$8c,$fe,$04,$50,$27	;Trk G; 20230421.mml: 26
	db	$4b,$26,$47,$0d,$45,$33,$44,$27	;Trk G; 20230421.mml: 35
	db	$42,$1a,$40,$26,$42,$27,$44,$0d	;Trk G; 20230421.mml: 35
	db	$45,$33,$47,$27,$4b,$19,$50,$27	;Trk G; 20230421.mml: 35
	db	$4b,$27,$47,$0c,$45,$34,$47,$26	;Trk G; 20230421.mml: 37
	db	$49,$1a,$47,$27,$49,$26,$4b,$0d	;Trk G; 20230421.mml: 37
	db	$49,$34,$4b,$26,$47,$1a,$ee
	db	bank(song_000_06_lp)*2
	dw	song_000_06_lp


song_000_07:	;Trk H

song_000_07_lp:
	db	$fd,$8f,$fd,$8a,$fe,$0f,$22,$0d	;Trk H; 20230421.mml: 26
	db	$32,$06,$32,$07,$22,$0d,$32,$06	;Trk H; 20230421.mml: 38
	db	$32,$06,$22,$0d,$32,$07,$32,$06	;Trk H; 20230421.mml: 38
	db	$22,$0d,$32,$06,$32,$07,$22,$0d	;Trk H; 20230421.mml: 38
	db	$32,$06,$32,$07,$22,$0c,$32,$07	;Trk H; 20230421.mml: 38
	db	$32,$06,$22,$0d,$32,$07,$32,$06	;Trk H; 20230421.mml: 38
	db	$22,$0d,$32,$06,$32,$07,$20,$0d	;Trk H; 20230421.mml: 38
	db	$30,$06,$30,$06,$20,$0d,$30,$07	;Trk H; 20230421.mml: 38
	db	$30,$06,$20,$0d,$30,$06,$30,$07	;Trk H; 20230421.mml: 38
	db	$20,$0d,$30,$06,$30,$07,$20,$0c	;Trk H; 20230421.mml: 38
	db	$30,$07,$30,$06,$20,$0d,$30,$07	;Trk H; 20230421.mml: 38
	db	$30,$06,$20,$0d,$30,$06,$30,$07	;Trk H; 20230421.mml: 38
	db	$20,$0d,$30,$06,$30,$06,$22,$0d	;Trk H; 20230421.mml: 38
	db	$32,$07,$32,$06,$22,$0d,$32,$06	;Trk H; 20230421.mml: 38
	db	$32,$07,$22,$0d,$32,$06,$32,$07	;Trk H; 20230421.mml: 38
	db	$22,$0c,$32,$07,$32,$06,$22,$0d	;Trk H; 20230421.mml: 38
	db	$32,$07,$32,$06,$22,$0d,$32,$06	;Trk H; 20230421.mml: 38
	db	$32,$07,$22,$0d,$32,$06,$32,$06	;Trk H; 20230421.mml: 38
	db	$22,$0d,$32,$07,$32,$06,$20,$0d	;Trk H; 20230421.mml: 38
	db	$30,$06,$30,$07,$20,$0d,$30,$06	;Trk H; 20230421.mml: 38
	db	$30,$07,$20,$0c,$30,$07,$30,$06	;Trk H; 20230421.mml: 38
	db	$20,$0d,$30,$07,$30,$06,$20,$0d	;Trk H; 20230421.mml: 38
	db	$30,$06,$30,$07,$20,$0d,$30,$06	;Trk H; 20230421.mml: 38
	db	$30,$06,$20,$0d,$30,$07,$30,$06	;Trk H; 20230421.mml: 38
	db	$20,$0d,$30,$06,$30,$07,$ee
	db	bank(song_000_07_lp)*2
	dw	song_000_07_lp


song_000_08:	;Trk I

song_000_08_lp:
	db	$fd,$8f,$fd,$87,$fe,$04,$50,$ce	;Trk I; 20230421.mml: 26
	db	$4b,$cd,$50,$ce,$4b,$ce,$ee
	db	bank(song_000_08_lp)*2
	dw	song_000_08_lp


song_000_09:	;Trk J

song_000_09_lp:
	db	$fd,$8f,$fd,$88,$fe,$04,$49,$ce	;Trk J; 20230421.mml: 26
	db	$47,$cd,$49,$ce,$47,$ce,$ee
	db	bank(song_000_09_lp)*2
	dw	song_000_09_lp


song_000_10:	;Trk K

song_000_10_lp:
	db	$fd,$8f,$fd,$88,$fe,$04,$45,$ce	;Trk K; 20230421.mml: 26
	db	$44,$cd,$45,$ce,$44,$ce,$ee
	db	bank(song_000_10_lp)*2
	dw	song_000_10_lp


song_000_11:	;Trk L

song_000_11_lp:
	db	$fd,$8f,$fd,$88,$fe,$04,$42,$ce	;Trk L; 20230421.mml: 26
	db	$40,$cd,$42,$ce,$40,$ce,$ee
	db	bank(song_000_11_lp)*2
	dw	song_000_11_lp

