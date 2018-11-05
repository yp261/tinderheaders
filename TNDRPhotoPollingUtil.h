//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface TNDRPhotoPollingUtil : NSObject
{
    _Bool _isPollingPhotos;
    unsigned long long _numPolls;
    NSTimer *_pollingTimer;
}

@property(nonatomic) _Bool isPollingPhotos; // @synthesize isPollingPhotos=_isPollingPhotos;
@property(retain, nonatomic) NSTimer *pollingTimer; // @synthesize pollingTimer=_pollingTimer;
@property(nonatomic) unsigned long long numPolls; // @synthesize numPolls=_numPolls;
- (void).cxx_destruct;
- (void)notifyPhotoPollingFinished;
- (void)pollPhotos;
- (void)dealloc;
- (id)init;

@end
