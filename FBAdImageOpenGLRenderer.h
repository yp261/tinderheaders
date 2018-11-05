//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAdImageRenderer-Protocol.h"
#import "GLKViewDelegate-Protocol.h"

@class CIContext, CIImage, GLKView, NSString, UIView;

@interface FBAdImageOpenGLRenderer : NSObject <GLKViewDelegate, FBAdImageRenderer>
{
    CIContext *_ciContext;
    GLKView *_glView;
    CIImage *_ciImage;
}

@property(retain, nonatomic) CIImage *ciImage; // @synthesize ciImage=_ciImage;
@property(retain, nonatomic) GLKView *glView; // @synthesize glView=_glView;
@property(retain, nonatomic) CIContext *ciContext; // @synthesize ciContext=_ciContext;
- (void).cxx_destruct;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (void)renderCIImage:(id)arg1;
@property(readonly, nonatomic) UIView *imageView;
- (id)initWithEAGLContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

