//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface FNFLiveDashPrefetchedAssetSet : NSObject
{
    NSMutableDictionary *_assetsDictionary;
    NSMutableSet *_knownURLs;
}

- (void).cxx_destruct;
- (id)_hashURL:(id)arg1;
- (_Bool)isKnownURL:(id)arg1;
- (_Bool)containsAssetForURL:(id)arg1;
- (void)insertAsset:(id)arg1 forURL:(id)arg2;
- (id)fetchAndRemoveAssetForURL:(id)arg1;
- (id)init;

@end

