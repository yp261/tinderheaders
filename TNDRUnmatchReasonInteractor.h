//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TNDRUnmatchReasonInteractor : NSObject
{
    // Error parsing type: , name: unmatchReasonDelegate
    // Error parsing type: , name: otherReasonDialogViewController
    // Error parsing type: , name: application
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: analyticsClient
    // Error parsing type: , name: reportMatchInteractor.storage
    // Error parsing type: , name: blockMatchInteractor.storage
    // Error parsing type: , name: analyticsTracker.storage
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)processUnmatchWithMatch:(id)arg1 reason:(unsigned long long)arg2 presenter:(id)arg3;
- (void)unmatchWithOtherReasonWithMatch:(id)arg1 message:(id)arg2 presenter:(id)arg3;
- (void)unmatchWithMatch:(id)arg1 with:(unsigned long long)arg2 presenter:(id)arg3;
- (id)initWithAnalyticsClient:(id)arg1;

@end

