//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6Tinder15ChatMessageCell.h"

@class NSURL;

@interface _TtC6Tinder14GIFMessageCell : _TtC6Tinder15ChatMessageCell
{
    // Error parsing type: , name: gifView.storage
    // Error parsing type: , name: gifURL
}

+ (id)gifMessageSizeComputer;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setupConstraints;
- (void)setupViews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic, copy) NSURL *gifURL; // @synthesize gifURL;

@end

