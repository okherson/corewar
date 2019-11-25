.name "ASAP"
.comment "I am a very fast bot. Try me... harder... ASAP"

live:
		live %1
		fork %-5
		live %1
		fork %-4
		live %1
		fork %-3
		live %1
		fork %-1
		live %1
		fork %-4
		live %1
		fork %-7
		live %1
		fork %-9
		live %1

traveling:
			  zjmp %:live
	          ld %115, r9
	          st r5, 222
	          st r3, 222
		      st r4, 222
	          st r8, 222
		      st r4, -222
		      st r4, -222
		      st r2, 3500
		      st r4, -222
		      st r4, -222
		      st r9, -222
		      st r4, 1096
	          st r8, 1290
		      st r4, 1350
		      st r1, -222
		      st r4, 3032
		      st r1, 3064
		      st r4, -222
		      st r4, 2183
		      st r6, 2200
		      st r4, 2500
		      st r3, -222
		      st r4, -222
	          zjmp %:traveling
