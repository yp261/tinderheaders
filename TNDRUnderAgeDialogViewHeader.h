//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TNDRDialogHeader-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"

@class NSArray, NSAttributedString, NSString, TNDRAttributedLabel, UIImage, UIImageView, UILabel, UITextField;

@interface TNDRUnderAgeDialogViewHeader : UIView <TNDRDialogHeader, TTTAttributedLabelDelegate>
{
    _Bool hideSeparatorLine;
    _Bool _shouldCollectEmail;
    _Bool _calculateContentSize;
    UILabel *titleTextLabel;
    NSAttributedString *_detailText;
    TNDRAttributedLabel *_detailTextLabel;
    NSString *_email;
    UITextField *_textInput;
    double _textContainerHorizontalPadding;
    UIView *_contentView;
    UIView *_textBackgroundView;
    UIImage *_photoUploadFailureIcon;
    UIImage *_image;
    UIImageView *_imageView;
    UIView *_separatorLine;
    UIView *_topInputLine;
    UIView *_bottomInputLine;
    NSArray *_contentConstraints;
    double _preferredContentWidth;
    struct UIEdgeInsets _contentViewInsets;
    struct UIEdgeInsets _imageViewInsets;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) _Bool calculateContentSize; // @synthesize calculateContentSize=_calculateContentSize;
@property(nonatomic) double preferredContentWidth; // @synthesize preferredContentWidth=_preferredContentWidth;
@property(retain, nonatomic) NSArray *contentConstraints; // @synthesize contentConstraints=_contentConstraints;
@property(retain, nonatomic) UIView *bottomInputLine; // @synthesize bottomInputLine=_bottomInputLine;
@property(retain, nonatomic) UIView *topInputLine; // @synthesize topInputLine=_topInputLine;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(nonatomic) struct UIEdgeInsets imageViewInsets; // @synthesize imageViewInsets=_imageViewInsets;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) UIImage *photoUploadFailureIcon; // @synthesize photoUploadFailureIcon=_photoUploadFailureIcon;
@property(retain, nonatomic) UIView *textBackgroundView; // @synthesize textBackgroundView=_textBackgroundView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) struct UIEdgeInsets contentViewInsets; // @synthesize contentViewInsets=_contentViewInsets;
@property(nonatomic) double textContainerHorizontalPadding; // @synthesize textContainerHorizontalPadding=_textContainerHorizontalPadding;
@property(retain, nonatomic) UITextField *textInput; // @synthesize textInput=_textInput;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) TNDRAttributedLabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(nonatomic) _Bool shouldCollectEmail; // @synthesize shouldCollectEmail=_shouldCollectEmail;
@property(copy, nonatomic) NSAttributedString *detailText; // @synthesize detailText=_detailText;
@property(nonatomic) _Bool hideSeparatorLine; // @synthesize hideSeparatorLine;
@property(readonly, nonatomic) UILabel *titleTextLabel; // @synthesize titleTextLabel;
- (void).cxx_destruct;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize)intrinsicContentSize;
- (void)updateSubviewConstraints;
- (void)updateConstraints;
- (void)layoutSubviews;
- (void)setupTextInput;
- (void)setupSeparatorLine;
- (void)setupDetailTextLabel;
- (void)setupImageView;
- (void)setupSubviews;
- (double)preferredTextLabelWidth;
- (id)underageIcon;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (id)initWithDetailText:(id)arg1 shouldCollectEmail:(_Bool)arg2 facebookEmail:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

