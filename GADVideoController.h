//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADAdViewVideoControllerDelegate-Protocol.h"
#import "GADVideoControllerDelegate-Protocol.h"
#import "GADVideoControlling-Protocol.h"

@class NSString;
@protocol GADVideoControllerDelegate, GADVideoControlling;

@interface GADVideoController : NSObject <GADAdViewVideoControllerDelegate, GADVideoControllerDelegate, GADVideoControlling>
{
    id <GADVideoControllerDelegate> _delegate;
    id <GADVideoControlling> _internalVideoController;
}

@property(retain, nonatomic) id <GADVideoControlling> internalVideoController; // @synthesize internalVideoController=_internalVideoController;
@property(nonatomic) __weak id <GADVideoControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)videoControllerDidEndVideoPlayback:(id)arg1;
- (void)adViewVideoControllerDidEndVideoPlayback:(id)arg1;
- (void)setInternalVideoControllerDelegate:(id)arg1;
@property(nonatomic) _Bool startMuted;
- (double)aspectRatio;
- (_Bool)hasVideoContent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

