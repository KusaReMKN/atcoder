      PROGRAM MAIN
      INTEGER A, B, C

      READ(*,*) A, B, C
      IF (A*B .GT. C) THEN
         PRINT *, 'Yes'
      ELSE
         PRINT *, 'No'
      END IF

      STOP
      END
