//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString;

@interface _TtC6Tinder24EnterEmailViewController : UIViewController
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: maxChars
    // Error parsing type: , name: isEmailValid
    // Error parsing type: , name: hasEnteredValidEmail
    // Error parsing type: , name: placeholder
    // Error parsing type: , name: validationTimer
    // Error parsing type: , name: emailField.storage
    // Error parsing type: , name: infoDivider.storage
    // Error parsing type: , name: invalidChars
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChange:(id)arg1;
- (void)validateWithEmail:(id)arg1;
- (void)validateEmailField;
- (void)stopValidationTimer;
- (_Bool)shouldDelayValidationCheckFor:(id)arg1;
- (void)startValidationTimer;
- (void)startEditing;
- (void)updateUIWithNetworkingError:(id)arg1;
- (void)updateUIWithAuthError:(id)arg1;
- (void)updateUIWith:(id)arg1;
- (void)clearErrorUI;
- (void)viewDidLoad;
@property(nonatomic, copy) NSArray *invalidChars; // @synthesize invalidChars;
@property(nonatomic, copy) NSString *placeholder; // @synthesize placeholder;
@property(nonatomic) _Bool hasEnteredValidEmail; // @synthesize hasEnteredValidEmail;
@property(nonatomic) _Bool isEmailValid; // @synthesize isEmailValid;
@property(nonatomic, readonly) NSString *text;
@property(nonatomic, readonly) long long maxChars; // @synthesize maxChars;

@end

