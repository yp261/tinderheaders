//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDRDialogViewControllerDelegate-Protocol.h"

@class NSString, TNDRDialogViewController;

@protocol TNDRUnmatchReasonDialogViewControllerDelegate <TNDRDialogViewControllerDelegate>
- (void)requestDismissUnmatchCancelled;

@optional
- (void)didCompleteUnmatch:(_Bool)arg1;
- (void)dialogViewController:(TNDRDialogViewController *)arg1 cancelTappedWithReason:(unsigned long long)arg2;
- (void)dialogViewController:(TNDRDialogViewController *)arg1 unmatchTappedWithReason:(unsigned long long)arg2;
- (void)dialogViewController:(TNDRDialogViewController *)arg1 reasonTapped:(unsigned long long)arg2;
- (void)requestDismissUnmatchDialogForReason:(unsigned long long)arg1 message:(NSString *)arg2;
@end

