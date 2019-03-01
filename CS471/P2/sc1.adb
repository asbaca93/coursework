with Ada.Text_IO;


procedure Main is
	procedure F is
	begin
	Ada.Text_IO.Put_Line("I have Been Evaluated");
	end F;

	declare 
	X: Integer := 1;
begin
	if X = 2 and F then
		Ada.Text_IO.Put_Line("true");
	else 
		Ada.Text_IO.Put_Line("false");
	end if;	

	if X = 1 or F then
		Ada.Text_IO.Put_Line("true");
	else 
		Ada.Text_IO.Put_Line("false");
	end if;				
end Main;

