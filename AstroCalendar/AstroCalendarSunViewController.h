//
//  AstroCalendarSunViewController.h
//  AstroCalendar
//
//  Created by Paul Moore on 11-11-02.
//  Copyright (c) 2011 University of British Columbia. All rights reserved.
//  https://github.com/paulmoore/AstroCalendar
/*
 Permission is hereby granted, free of charge, to any person
 obtaining a copy of this software and associated documentation
 files (the "Software"), to deal in the Software without
 restriction, including without limitation the rights to use,
 copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the
 Software is furnished to do so, subject to the following
 conditions:
 
 The above copyright notice and this permission notice shall be
 included in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 OTHER DEALINGS IN THE SOFTWARE.
 */

#import <UIKit/UIKit.h>
#import <TapkuLibrary/TapkuLibrary.h>

/**
 * View Controller for the Sun Calendar.
 */
@interface AstroCalendarSunViewController : TKCalendarMonthViewController

/** The Navigation Controller recieved from it's parent. */
@property (nonatomic, weak) UINavigationController *navController;

/**
 * Inits an AstroCalendarSunViewController with a given parent Navigation Controller.
 *
 * @param controller The Navigation Controller
 * @return An instance of AstroCalendarSunViewController.
 */
- (id)initWithNavController:(UINavigationController *)controller;

/**
 * Selector for when the 'Moon Calendar' Toolbar button is taped.
 * Transitions to the AstroCalendarMoonViewController.
 */
- (void)didSelectMoonCalendarFromToolbar;

/**
 * Selector for when the 'Options' Toolbar button is taped.
 * Transitions to the the Options (not yet implemented).
 */
- (void)didSelectOptionsFromToolbar;

@end