//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADAdNetworkExtras-Protocol.h"

@class NSMutableDictionary, NSString;

@interface GADCustomEventExtras : NSObject <GADAdNetworkExtras>
{
    NSMutableDictionary *_extras;
}

- (void).cxx_destruct;
- (id)allExtras;
- (void)removeAllExtras;
- (id)extrasForLabel:(id)arg1;
- (void)setExtras:(id)arg1 forLabel:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
