//
//  CGalleryCell.h
//  Quantum
//
//  Created by John Blaine on 5/4/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "iPhotoLoad.h"

NS_ASSUME_NONNULL_BEGIN

@interface CGalleryCell : UICollectionViewCell
@property (nonatomic, retain) UIImageView *img;
@property (nonatomic, retain) UIActivityIndicatorView *indicator;

@property (nonatomic, retain) UIButton *name;
@property (nonatomic, retain) UITextView *dscr;

- (void)addItem:(NSString *) v;
- (void)addDscr:(NSString *) v;

- (void)imgVisible:(Boolean) b;

@end

NS_ASSUME_NONNULL_END
