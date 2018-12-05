/**
 * MIT License
 *
 * Copyright (c) 2018 Venkatraman Narayanan, Amrish Baskaran
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 *
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/**
 *
 *  @file    Control.h
 *  @Author  Venkatraman Narayanan (vijay4313)
 *  @Author Amrish Baskaran (amrish1222)
 *  @copyright  MIT
 *  @brief  Control Source file
 */

#include "../include/Control.h"

Control::Control() {
  // TODO Auto-generated constructor stub

}

Control::~Control() {
  // TODO Auto-generated destructor stub
}

/**
  * @brief Updates the Path variable
  * @param  path the path vector generated by 
  *         PathPlanning routine
  * @return none
  */
void Control::setPathPts(std::vector<PathPlanning::point3d> path) {}

/**
  * @brief Generates the velocity and pose for
  * publishing to the required topic
  * @param  none
  * @return none
  */
void Control::genVelocityPose() {}

/**
  * @brief Publishes velocity and Pose to the
  * required Topic
  * publishing to the required topic
  * @param  none
  * @return none
  */
void Control::publishVelocity() {}