//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSDate, NSString;

@interface SPTSession : NSObject <NSSecureCoding>
{
    NSString *_canonicalUsername;
    NSString *_accessToken;
    NSString *_encryptedRefreshToken;
    NSDate *_expirationDate;
    NSString *_tokenType;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *tokenType; // @synthesize tokenType=_tokenType;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSString *encryptedRefreshToken; // @synthesize encryptedRefreshToken=_encryptedRefreshToken;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(copy, nonatomic) NSString *canonicalUsername; // @synthesize canonicalUsername=_canonicalUsername;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isValid;
- (id)initWithUserName:(id)arg1 accessToken:(id)arg2 expirationTimeInterval:(double)arg3;
- (id)initWithUserName:(id)arg1 accessToken:(id)arg2 expirationDate:(id)arg3;
- (id)initWithUserName:(id)arg1 accessToken:(id)arg2 encryptedRefreshToken:(id)arg3 expirationDate:(id)arg4;

@end

