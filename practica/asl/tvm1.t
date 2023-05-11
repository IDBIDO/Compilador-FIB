>>> enter Program [source pos 1:0] [module: CodeGen]
  >>> enter Function [source pos 1:0] [module: CodeGen]
    >>> enter Declarations [source pos 2:2] [module: CodeGen]
    >>> exit Declarations [source pos 2:2] [module: CodeGen]
    >>> enter Statements [source pos 5:2] [module: CodeGen]
      >>> enter AssignStmt [source pos 5:2] [module: CodeGen]
        >>> enter Left_expr [source pos 5:2] [module: CodeGen]
          >>> enter Ident [source pos 5:2] [module: CodeGen]
          >>> exit Ident [source pos 5:2] [module: CodeGen]
        >>> exit Left_expr [source pos 5:2] [module: CodeGen]
        >>> enter Value [source pos 5:6] [module: CodeGen]
        >>> exit Value [source pos 5:6] [module: CodeGen]
      >>> exit AssignStmt [source pos 5:2] [module: CodeGen]
      >>> enter AssignStmt [source pos 6:2] [module: CodeGen]
        >>> enter Left_expr [source pos 6:2] [module: CodeGen]
          >>> enter Ident [source pos 6:2] [module: CodeGen]
          >>> exit Ident [source pos 6:2] [module: CodeGen]
        >>> exit Left_expr [source pos 6:2] [module: CodeGen]
        >>> enter Arithmetic [source pos 6:6] [module: CodeGen]
          >>> enter Arithmetic [source pos 6:6] [module: CodeGen]
            >>> enter ExprIdent [source pos 6:6] [module: CodeGen]
              >>> enter Ident [source pos 6:6] [module: CodeGen]
              >>> exit Ident [source pos 6:6] [module: CodeGen]
            >>> exit ExprIdent [source pos 6:6] [module: CodeGen]
            >>> enter Value [source pos 6:8] [module: CodeGen]
            >>> exit Value [source pos 6:8] [module: CodeGen]
   %2 = 5
   %3 = a * %2

          >>> exit Arithmetic [source pos 6:6] [module: CodeGen]
          >>> enter Arithmetic [source pos 6:12] [module: CodeGen]
            >>> enter ExprIdent [source pos 6:12] [module: CodeGen]
              >>> enter Ident [source pos 6:12] [module: CodeGen]
              >>> exit Ident [source pos 6:12] [module: CodeGen]
            >>> exit ExprIdent [source pos 6:12] [module: CodeGen]
            >>> enter Paren [source pos 6:14] [module: CodeGen]
              >>> enter Arithmetic [source pos 6:15] [module: CodeGen]
                >>> enter ExprIdent [source pos 6:15] [module: CodeGen]
                  >>> enter Ident [source pos 6:15] [module: CodeGen]
                  >>> exit Ident [source pos 6:15] [module: CodeGen]
                >>> exit ExprIdent [source pos 6:15] [module: CodeGen]
                >>> enter Value [source pos 6:17] [module: CodeGen]
                >>> exit Value [source pos 6:17] [module: CodeGen]
   %4 = 1
   %5 = a + %4

              >>> exit Arithmetic [source pos 6:15] [module: CodeGen]
            >>> exit Paren [source pos 6:14] [module: CodeGen]
   %4 = 1
   %5 = a + %4
   %6 = a * %5

          >>> exit Arithmetic [source pos 6:12] [module: CodeGen]
   %2 = 5
   %3 = a * %2
   %4 = 1
   %5 = a + %4
   %6 = a * %5
   %7 = %3 + %6

        >>> exit Arithmetic [source pos 6:6] [module: CodeGen]
      >>> exit AssignStmt [source pos 6:2] [module: CodeGen]
      >>> enter AssignStmt [source pos 7:2] [module: CodeGen]
        >>> enter Left_expr [source pos 7:2] [module: CodeGen]
          >>> enter Ident [source pos 7:2] [module: CodeGen]
          >>> exit Ident [source pos 7:2] [module: CodeGen]
        >>> exit Left_expr [source pos 7:2] [module: CodeGen]
        >>> enter Relational [source pos 7:8] [module: CodeGen]
          >>> enter ExprIdent [source pos 7:8] [module: CodeGen]
            >>> enter Ident [source pos 7:8] [module: CodeGen]
            >>> exit Ident [source pos 7:8] [module: CodeGen]
          >>> exit ExprIdent [source pos 7:8] [module: CodeGen]
          >>> enter ExprIdent [source pos 7:13] [module: CodeGen]
            >>> enter Ident [source pos 7:13] [module: CodeGen]
            >>> exit Ident [source pos 7:13] [module: CodeGen]
          >>> exit ExprIdent [source pos 7:13] [module: CodeGen]
        >>> exit Relational [source pos 7:8] [module: CodeGen]
        >>> enter Unary [source pos 7:19] [module: CodeGen]
          >>> enter Paren [source pos 7:23] [module: CodeGen]
            >>> enter Relational [source pos 7:24] [module: CodeGen]
              >>> enter ExprIdent [source pos 7:24] [module: CodeGen]
                >>> enter Ident [source pos 7:24] [module: CodeGen]
                >>> exit Ident [source pos 7:24] [module: CodeGen]
              >>> exit ExprIdent [source pos 7:24] [module: CodeGen]
              >>> enter Value [source pos 7:29] [module: CodeGen]
              >>> exit Value [source pos 7:29] [module: CodeGen]
            >>> exit Relational [source pos 7:24] [module: CodeGen]
          >>> exit Paren [source pos 7:23] [module: CodeGen]
        >>> exit Unary [source pos 7:19] [module: CodeGen]
