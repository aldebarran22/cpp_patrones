#include <iostream>

#include "Peticion.h"

#include "GestorSMS.h"
#include "GestorEmail.h"
#include "GestorWhatsApp.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Peticion pet(TMensaje::SMS, "Este es el contenido del mensaje");
	
	Gestor *sms = new GestorSMS(nullptr);
	Gestor *email =new GestorEmail(sms);
	Gestor *whatsApp = new GestorWhatsApp(email);
	
	whatsApp->trasmitir(pet);
	
	
	delete sms;
	delete email;
	delete whatsApp;
	
	sms=nullptr;
	email=nullptr;
	whatsApp=nullptr;
	
	return 0;
}
