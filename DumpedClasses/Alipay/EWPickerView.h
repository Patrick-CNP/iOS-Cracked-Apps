//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPickerView.h"

@class UIView;

@interface EWPickerView : APPickerView
{
    _Bool _isShow;
    UIView *_alphaView;
}

@property(retain, nonatomic) UIView *alphaView; // @synthesize alphaView=_alphaView;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (void).cxx_destruct;
- (void)hide;
- (void)show;

@end

