//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UICKeyChainStore;

@interface TNDRAuthToken : NSObject
{
    _Bool _isNewUser;
    _Bool _requiresValidation;
    _Bool _useAccountKitValidation;
    NSString *_apiToken;
    NSString *_onboardingToken;
    UICKeyChainStore *_keychain;
}

+ (id)currentToken;
+ (id)keychain;
@property(retain, nonatomic) UICKeyChainStore *keychain; // @synthesize keychain=_keychain;
@property(nonatomic) _Bool useAccountKitValidation; // @synthesize useAccountKitValidation=_useAccountKitValidation;
@property(nonatomic) _Bool requiresValidation; // @synthesize requiresValidation=_requiresValidation;
@property(nonatomic) _Bool isNewUser; // @synthesize isNewUser=_isNewUser;
@property(copy, nonatomic) NSString *onboardingToken; // @synthesize onboardingToken=_onboardingToken;
@property(copy, nonatomic) NSString *apiToken; // @synthesize apiToken=_apiToken;
- (void).cxx_destruct;
- (id)addTokenInfoTo:(id)arg1;
- (id)description;
- (id)debugDescription;
- (void)persistToKeychain;
- (void)clearFromKeychain;
- (id)initWithOnboardingToken:(id)arg1;
- (id)initWithAPIToken:(id)arg1;
- (id)initWithDictionary:(id)arg1;
@property(readonly, nonatomic) _Bool isValid;
@property(readonly, nonatomic) _Bool hasOnboardingToken;
@property(readonly, nonatomic) _Bool hasAPIToken;

@end
