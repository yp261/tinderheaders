//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDRDialogViewController.h"

#import "TNDRWhatsNewDialogPagingDelegate-Protocol.h"

@class NSArray, NSString, TNDRWhatsNewDialogFooter, TNDRWhatsNewDialogHeader;

@interface TNDRWhatsNewDialogViewController : TNDRDialogViewController <TNDRWhatsNewDialogPagingDelegate>
{
    NSString *_whatsNewID;
    NSArray *_items;
    CDUnknownBlockType _completion;
}

+ (id)viewControllerNavigationKey;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *whatsNewID; // @synthesize whatsNewID=_whatsNewID;
- (void).cxx_destruct;
- (void)whatsNewDialogHeader:(id)arg1 isChangingPageWithFraction:(double)arg2;
- (void)actionButtonPressed:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)setupHeaderView;
- (void)setupFooterView;
- (void)viewDidLoad;
@property(readonly, nonatomic) TNDRWhatsNewDialogFooter *whatsNewFooter;
@property(readonly, nonatomic) TNDRWhatsNewDialogHeader *whatsNewHeader;
- (id)initWithItems:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
