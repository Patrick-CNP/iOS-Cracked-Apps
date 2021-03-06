//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSArray, NSIndexSet, UIColor, UIImage, UIImageView;

@interface QQRectangleFilterControl : UIControl
{
    NSArray *_itemControlsArray;
    UIImage *_backgroundImage;
    UIColor *_backgroundColor;
    NSArray *_separatorsArray;
    NSIndexSet *_selectedIndexes;
    UIColor *_selectedItemBgColor;
    UIColor *_normalItemBgColor;
    double _separatorWidth;
    UIImageView *_backgroundImageView;
    struct UIEdgeInsets _contentEdgeInsets;
}

@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) double separatorWidth; // @synthesize separatorWidth=_separatorWidth;
@property(retain, nonatomic) UIColor *normalItemBgColor; // @synthesize normalItemBgColor=_normalItemBgColor;
@property(retain, nonatomic) UIColor *selectedItemBgColor; // @synthesize selectedItemBgColor=_selectedItemBgColor;
@property(retain, nonatomic) NSIndexSet *selectedIndexes; // @synthesize selectedIndexes=_selectedIndexes;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(retain, nonatomic) NSArray *separatorsArray; // @synthesize separatorsArray=_separatorsArray;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) NSArray *itemControlsArray; // @synthesize itemControlsArray=_itemControlsArray;
- (void).cxx_destruct;
- (void)updateItemViews;
- (void)itemPressed:(id)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)commonInitializer;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

