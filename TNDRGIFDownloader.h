//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TNDRGIFDownloader : NSObject
{
}

+ (id)sharedDownlaoder;
- (id)trendingGIFsWithRating:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)searchGIFsForQuery:(id)arg1 rating:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)GIFsForURL:(id)arg1 query:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
